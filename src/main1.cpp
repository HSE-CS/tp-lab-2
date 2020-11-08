#include <iostream>
#include <cstring>

#include "task1.h"

using namespace std;

int main() {
    const size_t n = 5;
    char *arr[5] = {(char*)"Lol", (char*)"M", (char*)"Mohe", (char*)"Loqurt", (char*)"Nympy"};
    msort(arr, n);
    for (size_t i = 0; i < n; ++i)
        cout << arr[i] << '\t';
    cout << endl;

    return 0;
}