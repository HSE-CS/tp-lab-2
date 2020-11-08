#include <iostream>
#include <cstring>
#include "../include/task2.h"

int genFunc();

int main() {
    const int size = 4;
	int* arr;
	arr = createArr<int, size>(genFunc);
    for(size_t i = 0; i < size; i++)
            std::cout<<arr[i]<<" ";
    return 0;
}

int genFunc()
{
    static int t = 48;
    return t++;
}