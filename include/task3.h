//
//  task3.h
//  programming-technologies
//
//  Created by Даниил Иванов on 08.11.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#ifndef task3_h
#define task3_h

#pragma once
#include <iostream>
#include <string.h>

 template<typename T, size_t size>
 void map(T* arr, T(*change)(T val))
 {
     for (size_t i = 0; i < size; i++)
     {
         arr[i] = change(arr[i]);
     }
 }


 #endif
#endif /* task3_h */
