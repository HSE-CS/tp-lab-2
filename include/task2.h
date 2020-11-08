#include <iostream>
#include <cstring>
using namespace std;

template<typename T, const int n>
T* createArr(T(*gen)()) {
    T* arr = new T[n];
    for (size_t i = 0; i < n; i++)
        arr[i] = gen();
    return arr;
}
