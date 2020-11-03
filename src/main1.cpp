#include <iostream>
#include "task1.h"

int main() {
    const size_t n = 6;

    double arr[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
    msort(arr, n);
    for (double i : arr)
        std::cout << i << ' ';

    std::cout << std::endl;

    char* arr1[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
    msort(arr1, n);
    for (auto & i : arr1)
        std::cout << i << ' ';


    return 0;
}
