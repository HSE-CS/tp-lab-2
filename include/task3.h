#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H


template <typename T, size_t n>
void map(T* mas, T(*change)(T)){
    for (int i = 0; i < n; i++){
        mas[i] = change(mas[i]);
    }
}

template <typename T>
T change(T el) {
    return el + 1;
}
#endif