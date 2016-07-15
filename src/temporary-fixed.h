#ifndef TEMPORARY_FIXED_H_
#define TEMPORARY_FIXED_H_

#include <string>
#include <vector>

class Employee {
  public:
    Employee(std::string name, std::string school) : name_{name}, school_{school} {}

    std::string name_;
    std::string school_;
};

std::string FindSchool(const std::vector<Employee>& employees, const std::string& name);

#endif // TEMPORARY_FIXED_H_
