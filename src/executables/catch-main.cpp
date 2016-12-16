#include <iostream>
#include <cassert>
#include <exception>


int main() {
    /*
     * try:
     *    number = 1 / 0
     * except Exception as e:
     *    print "blah"
     */ 

    try {
        int k = 0;
        if (k == 0) {
            throw std::invalid_argument("No bueno");
        }
        int num = 1 / k;
        std::cout << num << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
