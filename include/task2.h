#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

int counter=47;

template <class T>
T gen() {
    counter++;
    return (T)counter;
}

template<class T, size_t n>
T* createArr(T(*gen) ()){
    T* new_mas = new T[n];
    for (int i = 0; i < n; i++)
        new_mas[i] = gen();
    return new_mas;
}

#endif