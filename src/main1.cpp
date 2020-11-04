#include <iostream>
#include <cstring>
#include "task1.h"

using namespace std;

int main() {
    const int size = 5;
    int arr[size]{4324,21,1,4124412,12};
    msort(arr, size);
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
}