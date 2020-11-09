#include "task1.h"
#include <iostream>


int main(){
    const size_t n = 6;
    double val[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(val, n);
    for (int i = 0; i < n; ++i) {
        std::cout<<val[i]<<" ";
    }
}