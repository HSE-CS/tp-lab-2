template<typename F, size_t n>
F* createArr(F(*f)()) {
    F* arr = new F[n];
    for (int i = 0; i < n; i++) {
        arr[i] = f();
    }
    return arr;
}