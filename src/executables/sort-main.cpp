#include <iostream>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>

#define SIZE 8

using Queens = std::vector<int>;
using Constraints = std::stack<std::unordered_set<int>>;

void guess(Queens& queens, Constraints& constraints) {
    auto row = queens.size();
    for (int column = 0; column < SIZE; ++column) {
        bool good = true;

        if (!constraints.empty() && constraints.top().find(column) != constraints.top().cend()) {
            good = false;
        } else {
            for (int other_row = 0; other_row < static_cast<int>(row); ++other_row) {
                if (queens[other_row] == column) {
                    good = false;
                    break;
                }
                if ((queens[other_row] + other_row) == (column + static_cast<int>(row)) ||
                    (queens[other_row] - other_row) == (column - static_cast<int>(row))) {
                    good = false;
                    break;
                }
            }
        }

        if (good) {
            queens.push_back(column);
            if (queens.size() > constraints.size()) {
                constraints.push(std::unordered_set<int>());
            }
            return;
        }
    }

    if (constraints.size() > queens.size()) {
        constraints.pop();
    }
    if (row == queens.size()) {
        constraints.top().insert(queens.back());
        queens.pop_back();
    }
}

void print(const Queens& queens) {
    std::cout << std::string(SIZE * 2 + 1, '-') << std::endl;
    for (auto row = 0; row < SIZE; ++row) {
        std::cout << "|";
        for (auto column = 0; column < SIZE; ++column) {
            if (row < static_cast<int>(queens.size()) && column == queens[row]) {
                std::cout << "Q|";
            } else {
                std::cout << " |";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::string(SIZE * 2 + 1, '-') << std::endl;
}

void print(Constraints constraints) {
    int row = constraints.size() - 1;
    while (!constraints.empty()) {
        auto constraint = constraints.top();
        constraints.pop();

        std::cout << "Constraints[" << row-- << "]: ";
        for (auto c : constraint) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    Queens queens;
    Constraints constraints;

    while (queens.size() < SIZE) {
        guess(queens, constraints);
    }
    print(queens);
}
