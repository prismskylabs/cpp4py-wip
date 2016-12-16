#include "singleton.h"

#include <iostream>

int main() {
    {
        auto& singleton = Singleton::GetInstance();
        singleton.data = "hello world";
        std::cout << singleton.data << std::endl;
    }
    {
        auto& singleton = Singleton::GetInstance();
        singleton.data = "hola mundo";
        std::cout << singleton.data << std::endl;
    }
    auto& singleton = Singleton::GetInstance();
    std::cout << singleton.data << std::endl;
}
