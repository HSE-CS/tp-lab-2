#include <iostream>
#include <cstring>
#include "task1.h"

using namespace std;

int main() {

    const size_t n = 9;
    char* val[n]{ (char*)"ffda", (char*)"fdjge", (char*)"www", (char*)"yuf", (char*)"yvj", (char*)"frryr", (char*)"fwfgh", (char*)"gmhu", (char*)"fduog" };
    msort(val, n);
    for (size_t i = 0; i < n; i++)
    {
        cout << val[i] << ' ';
    }

    return 0;
}