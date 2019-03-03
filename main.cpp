#include <iostream>
#include "lib/tinyxml2.h"

int main() {
    tinyxml2::XMLDocument doc;
    doc.LoadFile("dream.xml");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}