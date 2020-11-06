//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef task2_h
#define task2_h

#include <iostream>
#include <string.h>

template <class T, unsigned int N> T* createArr (T (*gen_fun)()){
    T *my_new_arr = new T[N];
    for (int i = 0; i < N; i++)
        my_new_arr[i] = gen_fun();
        
    return my_new_arr;
}

#endif /* task1_hpp */
