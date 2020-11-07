#include "task2.h"
#include <bits/stdc++.h>


template<class T> T gen()
{
    return rand() % 2048;
}


int main(){

    const size_t n = 5;
    int* array;
    array = createArr<int, n>(gen);
    
    for(int i = 0;i < n;i++) std::cout << array[i] << ' ';

    delete[] array;
    
    return 0;
}