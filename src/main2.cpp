#include <iostream>
#include "task2.h"

int not_rand()
{
    static size_t c = 0; c++;
    return '0' + c * 2;
}

char* not_rand_str()
{
    static size_t c = 0; c++;
    char* str = new char[3];
    str[0] = 'a' + c * 2;
    str[1] = 'z' - c * 2;
    str[2] = '\0';
    return str;
}

int main()
{
    const size_t n = 5;
    int* arr = createArr<int, n>(not_rand);
    for (size_t i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    
    char** arr1 = createArr<char*, n>(not_rand_str);
    for (size_t i = 0; i < n; i++)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;

    delete[] arr;
    for (size_t i = 0; i < n; i++)
        delete[] arr1[i];
    delete[] arr1;

    return 0;
}

