#include <iostream>
#include "lib/tinyxml2.h"
bool recurseXML(tinyxml2::XMLDocument &doc);
using namespace tinyxml2;

int main() {
    tinyxml2::XMLDocument doc;
    doc.LoadFile("/root/CLionProjects/XMLDict/dream.xml");
    XMLPrinter streamer;
    doc.Print( &streamer);
    printf("%s", streamer.CStr());

//    XMLElement* titleElement = doc->FirstChildElement("PLAY")->FirstChildElement("TITLE");
//    recurseXML(doc);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

bool recurseXML(tinyxml2::XMLDocument &doc)
{
    XMLElement* titleElement = doc.FirstChildElement("PLAY")->FirstChildElement("TITLE");

    if(titleElement)
    {
        std::cout << "HIT" << std::endl;
        const  char* title = titleElement->GetText();
//        std::cout << *title  << std::endl;
    }
}