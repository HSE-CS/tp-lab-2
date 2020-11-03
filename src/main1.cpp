//
// Created by stoja on 03.11.2020.
//
#include "task1.h"
#include <iostream>

int main(){
    const size_t n = 6;
    double val[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(val, n);
    for (int i = 0; i < n; i++)
    {
        cout << val[i] << " ";
    }
    cout << endl;

    char* val2[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
    msort(val2, n);
    for (char* number : val2)
        cout << number << " ";
    cout << endl;
    return 0;
}

