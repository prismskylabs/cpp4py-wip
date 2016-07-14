#include <iostream>

#include "design.h"

int main() {
    PoorlyDesigned object("Hello world");

    std::cout << object.GetData() << std::endl;
}
