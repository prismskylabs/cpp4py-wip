#include <iostream>

#include "design-fixed.h"

int main() {
    BetterDesigned object("Hello world");

    std::cout << object.GetData() << std::endl;
}
