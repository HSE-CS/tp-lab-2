//
// Created by toliman on 08.11.2020.
//

#include "task3.h"

template<typename T>
T change(T element) {
    return element * 2 - element / 2 + element * 4 - element / 4;
}


signed main() {

    int very_cool_numbers[234]{2718, 314, 1, 2, 3, 43432, 333, 93, 83};

    map<int, 234>(very_cool_numbers, change);

    return 0;
}
