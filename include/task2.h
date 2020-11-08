#ifndef LAB_2_TASK2_H
#define LAB_2_TASK2_H

template<class T, unsigned int N>

T* createArr(T (*generator)()) {
    T* initial = new T[N];
    for (unsigned int i = 0; i < N; i++)
        initial[i] = generator();
        
    return arr;
}
#endif
