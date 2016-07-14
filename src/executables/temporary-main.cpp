#include <iostream>
#include <vector>

#include "temporary.h"

int main() {
    std::vector<Employee> employees{{"Huu", "Berkeley"},
                                    {"Ann", "Virginia Tech"},
                                    {"Mike", "Stanfurd"}};
    std::cout << FindSchool(employees, "Huu") << std::endl;
}
