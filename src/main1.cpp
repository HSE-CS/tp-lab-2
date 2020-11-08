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
     int* val = new int[n] {5, 3, 2, 4, 1, 6};
     msort(val, n);
     for (size_t i = 0; i < n; i++)
     {
         std::cout << val[i] << " ";
     }

     return 0;
 }
