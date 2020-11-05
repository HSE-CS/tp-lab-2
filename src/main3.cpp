#include <iostream>
#include "task3.h"
#include <string>
#include <cstring>

int main() {
    const size_t n = 5;
    char arr[n]{'1', '2', '3', '4', '5'};
    map<char, n>(arr, change);
    char expected[n]{'2', '3', '4', '5', '6'};
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<' '<<expected[i]<<std::endl;
    }
    return 0;
}