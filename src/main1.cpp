#include <iostream>
#include <cstring>
#include "task1.h"

using namespace std;

int main() {

    int a[]{ 3, 1, 5, 13, 4, 2, 56, 865 };
    msort(a, 8);
    for (auto i : a)
        cout << i << " ";
    cout << "\n";


    char *c[5] = {(char*)"Lol", (char*)"M", (char*)"Mohe", (char*)"Loqurt", (char*)"Nympy"};
    msort(c, 5);
    for (auto i : c)
        cout << i << " ";
    return 0;
}