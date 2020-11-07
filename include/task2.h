
template<typename T, size_t size>
T* createArr(T(*gen)()) {
    T* arr = new T[size];
    for (size_t i = 0; i < size; i++)
        arr[i] = gen();
    return arr;
}