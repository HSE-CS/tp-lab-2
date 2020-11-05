#include <iostream>
#include "task2.h"
#include <string>
#include <cstring>

int main(){
    const size_t n = 5;
    char* arr;
    arr = createArr<char, n>(gens);

    char *expected = new char[n]{48, 49, 50, 51, 52};

    for(size_t i = 0; i < n; i++)
        std::cout<<expected[i]<<' '<<arr[i]<<std::endl;
    delete[] arr;
    delete[] expected;
}