//
//  main1.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 08.11.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include <stdio.h>
#include "task1.h"

int main() {
    const size_t n = 6;
    char* val[n]{ (char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr" };
    msort(val, n);

    for (size_t i = 0; i < n; i++)
    {
        std::cout << val[i] << "\t";
    }

    return 0;
}
