//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "task2.h"

#include <iostream>
#include <cstdlib>

template<class T>
T gen()
{
    static int t = 48;
    return t++;
}


int main() {
    
    const size_t n = 5;
    int* arr;
    arr = createArr<int, n>(gen);
    
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}

