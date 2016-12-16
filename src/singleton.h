#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <string>


// Scott Meyer's Singleton
class Singleton {
  public:
    Singleton(const Singleton& instance) = delete;
    Singleton& operator=(const Singleton& instance) = delete;

    static Singleton& GetInstance();

    std::string data;

  private:
    Singleton() {};
};

// singleton.GetInstance();

#endif // SINGLETON_H_
