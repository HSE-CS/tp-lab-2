#include "task3.h"

template<class T>
T change(T val) {
    return val * 2;
}

int main() {
    const size_t n = 5;
    int arr[n]{ 1, 2, 3, 4, 5 };
    map<int, n>(arr, change);
    for (size_t i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    const size_t n1 = 5;
    char arr1[n1]{ '1', '2', '3', '4', '5' };
    map<char, n1>(arr1, change);
    for (size_t i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}