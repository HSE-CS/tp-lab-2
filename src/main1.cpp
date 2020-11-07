/*
 * @author Stanislav Stoianov
 */

#include <iostream>
#include "../include/task1.h"

int main() {
    double arrayDouble[6]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    msort(arrayDouble, 6);
    for (double i : arrayDouble) std::cout << i << ' ';

    std::cout << std::endl;

    char *arrayString[6]{(char *) "ffff", (char *) "fff2", (char *) "f", (char *) "ff", (char *) "vvv",
                         (char *) "fffrr"};
    msort(arrayString, 6);
    for (auto &i : arrayString) std::cout << i << ' ';

    return 0;
}