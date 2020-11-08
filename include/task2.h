//
// Created by jmax on 07.11.2020.
//

#ifndef LAB_2_TASK2_H
#define LAB_2_TASK2_H
template<class T, unsigned int N>
T* createArr(T (*generator)()) {
    T* arr = new T[N];
    for (unsigned int i = 0; i < N; i++)
        arr[i] = generator();
    return arr;
}
#endif //LAB_2_TASK2_H
