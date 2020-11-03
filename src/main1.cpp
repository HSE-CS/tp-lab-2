#include <iostream>
#include <cstring>
#include "task1.h"

using namespace std;

int main() {

    const size_t n = 6;
    char* val[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
    msort(val, n);
    for (size_t i = 0; i < n; i++)
    {
        cout << val[i] << ' ';
    }

    return 0;
}