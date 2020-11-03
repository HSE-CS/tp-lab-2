#include "task3.h"

template<class T>
T change(T val) {
    return val + 1;
}

int main() {
    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    map<int, n>(arr, change);  // int expected[n]{2, 3, 4, 5, 6};
    for (auto i = 0; i < n;++i) {
        std::cout << arr[i] << '\t';
    }

//    const size_t n = 5;
//    double arr[5]{1, 2.2, 3.3, 4.4, 5};
//    map<double, n>(arr, change);  // double expected[n]{2, 3.2, 4.3, 5.4, 6};
//    for (auto i = 0; i < n;++i) {
//        std::cout << arr[i] << '\t';
//    }
//
//    const size_t n = 5;
//    char arr[n]{'1', '2', '3', '4', '5'};
//    map<char, n>(arr, change);  //  char expected[n]{'2', '3', '4', '5', '6'};
//    for (auto i = 0; i < n; ++i) {
//        std::cout << arr[i] << '\t';
//    }
    return 0;
}

