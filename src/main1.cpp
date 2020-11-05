#include <iostream>
#include "../include/task1.h"

int main() {
    double val[6]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(val, 6);
    for (auto i : val) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}



