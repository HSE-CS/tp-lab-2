#include "task3.h"
#include <iostream>
int change(int a) {
    return a * a;
}

int main() {
    int* array = new int[10];
    map<int, 10>(array, &change);
    for (int i = 0; i < 10; ++i) {
        std::cout << array[i] << " ";
    }
    
}
