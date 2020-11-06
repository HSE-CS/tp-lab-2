//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "task3.h"

#include <iostream>
#include <cstdlib>

template<class T>
T change(T val)
{
    return val + 1;
}

template<>
char* change(char* val)
{
    size_t n = strlen(val);
    for(size_t i = 0; i < n; i++)
        val[i] = val[i] + 1;
    return val;
}

int main() {
    const size_t n = 5;
    int arr[n]{1, 2, 3, 4, 5};
    map<int, n>(arr, change);
    
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    
    
}

