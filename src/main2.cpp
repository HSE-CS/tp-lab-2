//
// Created by toliman on 08.11.2020.
//

#include "task2.h"

#include <cstdio>

template<typename T>
T gen() {  // Типа конгруэнтный генератор да

    static int elem = 34;
    return (elem += 19) % 83 * 19 % 41;

}

signed main(

) {

    const int size = 49;  // Ууу обожаю простые числа
    int *new_array = createArr<int, size>(gen);

    for (int i = 0; i < size; ++i) {
        printf("%d ", new_array[i]);
    }

    return 0;
}
