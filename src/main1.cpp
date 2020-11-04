#include <stdio.h>
#include <iostream>
#include "task1.h"

int main() {

    int arr[5]{3, 6, 2, 6, 1};
    msort(arr, 5);

    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";

    char *val[6]{(char *) "ffff", (char *) "fff2", (char *) "f", (char *) "ff", (char *) "vvv", (char *) "fffrr"};

    cout<<endl;
    msort(val, 6);
    for (int i = 0; i < 6; i++)
        std::cout << val[i] << " ";
}

