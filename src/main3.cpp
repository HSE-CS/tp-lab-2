#include "task3.h"
#include <iostream>

template<class T>
T mult_by_20(T val){
    return val*20;
}

int main(){
    double a[] = {.1, -20.0, 1.0, 0.0, 0.0, 7.0};
    map<double, 6>(a, mult_by_20);
    for (int i = 0; i < 6; ++ i) std::cout << a[i] << ' ';
    std::cout << '\n';
    return 0;
}