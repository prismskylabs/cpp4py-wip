#ifndef TEMPORARY_H_
#define TEMPORARY_H_

#include <string>
#include <vector>

class Employee {
  public:
    Employee(std::string name, std::string school) : name_{name}, school_{school} {}

    std::string name_;
    std::string school_;
};

std::string FindSchool(std::vector<Employee> employees, std::string name);

#endif // TEMPORARY_H_
