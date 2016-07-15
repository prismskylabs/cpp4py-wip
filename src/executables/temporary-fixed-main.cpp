#include <iostream>
#include <vector>

#include "temporary-fixed.h"

int main() {
    std::vector<Employee> employees{{"Huu", "Berkeley"},
                                    {"Ann", "Hokie Nation"},
                                    {"Mike", "Stanfurd"}};
    std::cout << FindSchool(employees, "Huu") << std::endl;
}
