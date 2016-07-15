#include "temporary-fixed.h"

#include <string>
#include <vector>

std::string FindSchool(const std::vector<Employee>& employees, const std::string& name) {
    for (const auto& employee : employees) {
        if (employee.name_ == name) {
            return employee.school_;
        }
    }

    return "";
}
