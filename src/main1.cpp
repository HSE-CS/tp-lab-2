#include <stdio.h>
#include <iostream>
#include "task1.h"

int main() {

    float arr[4]{3.1, 6.2, 2.4, 6.5};
    msort(arr, 4);

    for (int i = 0; i < 4; i++)
        std::cout << arr[i] << " ";

    char *val[6]{(char *) "ffff", (char *) "fff2", (char *) "f", (char *) "ff", (char *) "vvv", (char *) "fffrr"};

    cout<<endl;
    msort(val, 6);
    for (int i = 0; i < 6; i++)
        std::cout << val[i] << " ";
}

