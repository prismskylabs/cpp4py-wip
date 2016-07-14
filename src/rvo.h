#ifndef RVO_H_
#define RVO_H_

#include <string>

class ExpensiveObject {
  public:
    ExpensiveObject() {
        string_ = "Hello world, I am supposed to be a large object that's expensive to duplicate";
    }

    std::string string_;
};

ExpensiveObject value_return();
ExpensiveObject& local_reference();

#endif // RVO_H_
