#include "task3.h"
#include <iostream>
int change(int a) {
    return a * a;
}

int main() {
    int size = 10;
    int* array = new int[size];
    map<int, size>(array, &change);
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    
}
