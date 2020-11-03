//
// Created by sharg on 03.11.2020.
//
#include "task3.h"
using namespace std;
template <typename T>
T change2(T number)
{
    return number*2;
}
int main() {
    const size_t size = 5;
    int* array = new int[size]{1,23, -127799,1223, -2222};
    map<int, size>(array, change2);
    for (size_t i = 0; i < size; ++i) {
        cout << array[i] << endl;
    }
    return 0;
}