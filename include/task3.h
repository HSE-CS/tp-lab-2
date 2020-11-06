//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef task3_h
#define task3_h

#include <iostream>
#include <string.h>

template <class T, size_t N> void map (T (&my_arr)[N], T (*change_fun)(T)){
    for (int i = 0; i < N; i++)
        my_arr[i] = change_fun(my_arr[i]);
}

#endif /* task1_hpp */
