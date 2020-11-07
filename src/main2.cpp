#include <iostream>
#include "task2.h"

using namespace std;

template<class T>
T gen()
{
    static int t = 48;
    return t++;
}

int main() {

    const size_t size = 5;
    int* array;
    array = createArr<int, size>(gen);
    for (size_t i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    return 0;
