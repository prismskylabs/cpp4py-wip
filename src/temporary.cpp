#include "temporary.h"

#include <string>
#include <vector>

std::string FindSchool(std::vector<Employee> employees, std::string name) {
    for (std::vector<Employee>::iterator it = employees.begin(); it != employees.end(); it++) {
        if (it->name_ == name) {
            return it->school_;
        }
    }

    return "";
}

// There are four pessimizations related to temporary objects here
