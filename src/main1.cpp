//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "task1.h"

#include <iostream>
#include <cstdlib>


//using namespace std;


int main() {

    int size_t = 6;
    float* val = new float[size_t]{5.5f, 0.0f, 1.0f, 9.0f, -1.0f, 5.4f};
//    const int size_t = 6;
//    char* val[size_t]{(char*)"ffff", (char*)"fff2", (char*)"f", (char*)"ff", (char*)"vvv", (char*)"fffrr"};
//    int *arr = new int[size_t]{0, -1 , 9, 5};
//    arr = msort_rec(arr, 0, size_t-1);
    msort(val, size_t);

    for (int i = 0; i < size_t; i++){
        std:: cout << val[i] << " ";
    }
    
}

