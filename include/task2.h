#ifndef TEST_TASK2_H
#define TEST_TASK2_H

template <typename T, unsigned int n>
T* createArr(T(*gen) ()){
    T* arr = new T[n];
    for (int i = 0; i < n; i++){
        arr[i] = gen();
    }
    return arr;
}

#endif //TEST_TASK2_H

