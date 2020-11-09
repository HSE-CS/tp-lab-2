#include <iostream>
#include <task1.h>

using namespace std;


int main() {
//    const size_t n = 11;
//    int *arr = new int[n]{2, 10, 13, 1, 1, -4, 2, 4, 5, 6, 7};
//    msort(arr, n);
//    for (int i = 0; i < n; i++) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
    const size_t n1 = 6;
    char *arr2[n1]{(char *) "ff", (char *) "hello1", (char *) "f", (char *) "fggggg", (char *) "vfffgggffff",
                   (char *) "ff"};
    msort(arr2, n1);
    for (auto & i : arr2) {
        std::cout << i << " ";
    }
    return 0;
}