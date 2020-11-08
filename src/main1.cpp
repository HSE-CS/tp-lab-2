#include <iostream>
#include "task1.h"

using namespace std;

int main() {

    int a[]{ 5, 3, 2, 3, 10, 22, 6, 85 };
    msort(a, 8);
    for (auto i : a)
        cout << i << " ";
    cout << "\n";

    double b[]{ 3.5, 1.1, 5.6, 13.5, 4.1, 10.0 };
    msort(b, 6);
    for (auto i : b)
        cout << i << " ";
    cout << "\n";

    char *c[5] = {(char*)"Lol", (char*)"M", (char*)"Mohe", (char*)"Loqurt", (char*)"Nympy"};
    msort(c, 5);
    for (auto i : c)
        cout << i << " ";
    return 0;
}