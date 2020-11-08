#include <iostream>
#include <cstring>
#include "task1.h"

using namespace std;

int main() {
    char *c[5] = {(char*)"Lol", (char*)"M", (char*)"Mohe", (char*)"Loqurt", (char*)"Nympy"};
    msort(c, 5);
    for (auto i : c)
        cout << i << " ";
    return 0;
}