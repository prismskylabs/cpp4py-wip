#include <iostream>
#include <string>

int main() {
    // l = lambda x: x*x
    // l(4) == 16
    
    int m = 50;
    auto l = [&m](int& x) {
        return m * x;
    };
    int x = 4;
    m = 20;
    std::cout << l(x) << std::endl;
    m = 10;
    std::cout << l(x) << std::endl;
}
