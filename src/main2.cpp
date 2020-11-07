#include "task2.h"
#include <iostream>

template<class T>
T gen(){
    return 1010;
}

float gen_2(){
    return -10.1;
}

int main(){
    int *a = createArr<int, 20>(gen);
    float *b = createArr<float, 20>(gen_2);
    for (int i = 0; i < 20; ++ i) std::cout << a[i] << ' ';
    std::cout << '\n';
    for (int i = 0; i < 20; ++ i) std::cout << b[i] << ' ';
    std::cout << '\n';
    return 0;
}