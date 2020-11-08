#include <iostream>
#include <cstring>
using namespace std;

template<typename T, const int n>
void map(T* arr, T(*change)(T)) {
    for (size_t i = 0; i < n; i++) {
        arr[i] = change(arr[i]);
    }
}
