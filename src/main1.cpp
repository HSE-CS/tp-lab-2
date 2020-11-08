#include <iostream>
#include "task1.h"

int main() {
    const size_t n = 6;
    char* val1[n]{(char*)"1234", (char*)"1234", (char*)"1", (char*)"123123123", (char*)"12345", (char*)"12"};
    msort(val1, n);
    for (auto & i : val1) {
        std::cout << i << " ";
    }
    std::cout<<std::endl;
    int val2[n]{12, 34, 1, -999, 100, 6};
    msort(val2, n);
    for (auto & i : val2) {
        std::cout << i << " ";
    }
}
