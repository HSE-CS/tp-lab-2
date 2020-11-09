//
//  task2.h
//  programming-technologies
//
//  Created by Даниил Иванов on 08.11.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#ifndef task2_h
#define task2_h
#pragma once
#include <iostream>
#include <time.h>



 template <typename T, size_t size>
 T* createArr(T(*gen)()) {
     T* arr = new T[size];
     for (size_t i = 0; i < size; ++i)
     {
         arr[i] = gen();
     }
     return arr;
 }

#endif /* task2_h */
