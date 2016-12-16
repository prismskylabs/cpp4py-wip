#include <iostream>
#include <string>

/* Python Inheritance and Polymorphism
 *
 * class Animal(object):
 *     def speak(self):
 *         raise NotImplementedError()
 *
 *     def speak_twice(self):
 *         self.speak()
 *         self.speak()
 *
 * class Dog(Animal):
 *     def speak(self):
 *         print "Ruff!"
 *
 * class Cat(Animal):
 *     def speak(self):
 *         print "Meow!"
 *
 * class Hokie(object):
 *     def speak_twice(self):
 *         print "Gobble!"
 *         print "Gobble!"
 *
 * 
 * animals = [Dog(), Cat(), Hokie()]
 *
 * for animal in animals:
 *     animal.speak_twice()
 *
 */

class Animal {
  public:
    Animal(std::string words) : words_{words} {}

    void speak() {
        std::cout << "hello" << std::endl;
    }

    void speak_twice() {
        speak();
        speak();
    }

    std::string words_;
};

class Dog : public Animal {
  public:
    Dog(std::string words) : Animal(words) {}

    void speak() {
        std::cout << words_ << std::endl;
    }
};

class Cat : public Animal {
  public:
    Cat(std::string words) : Animal(words) {}

    void speak() {
        std::cout << words_ << std::endl;
    }
};

class Hokie : public Animal {
  public:
    Hokie(std::string words, int feathers) : Animal{words}, feathers_{multiply_feathers(feathers)} {}

    void speak() {
        std::cout << words_ << " " << feathers_ << std::endl;
    }

    static int multiply_feathers(int feathers) {
        return feathers * 100;
    }

    int feathers_;
};

#include <vector>
#include <map>
int main() {
    std::vector<Animal*> animals;
    // Cannot have privately inherited base class be used as ptr to subclass
    animals.push_back(new Hokie("Gobble!", 2));
    animals.push_back(new Dog("Ruff!"));
    animals.push_back(new Cat("Meow!"));

    Hokie hokie("fdhsalfjds" , 5);
    hokie.speak();
    for (auto animal : animals) {
        animal->speak_twice();
    }
    std::map<std::string, std::pair<int, int>> dict{{"k", {3, 5}}};

    auto l = [] (int m) { return m; };

    std::cout << l(4) << std::endl;
    return 0;
    //Animal { Dog {}, ~Dog(), } ~Animal()
}
