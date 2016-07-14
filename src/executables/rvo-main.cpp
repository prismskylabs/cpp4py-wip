#include <iostream>

#include "rvo.h"

int main() {
    std::cout << value_return().string_ << std::endl;
    std::cout << local_reference().string_ << std::endl;
}
