#include <iostream>
#include "task1.h"

int main(){
    const size_t n = 6;
    double val[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(val, n);
    double expected[n]{-1, 2.1, 2.4, 2.5, 3.0, 4.0};
    for (int i=0;i<n;i++){
        std::cout << val[i] << ' '<< expected[i]<<std::endl;
    };
    return 0;
}