#include <iostream>
#include <cstring>
#include "../include/task3.h"

int changeFunc(int i);


int main() {
    const int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};
	map<int, size>(arr, changeFunc);
    for(size_t i = 0; i < size; i++)
        std::cout<<arr[i]<<" ";
    return 0;
}

int changeFunc(int i)
{
    return i * 2;
}
