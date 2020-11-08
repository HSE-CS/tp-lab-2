template <typename T, size_t N>
void map(T a[],T(*change)(T)){
    for (int i = 0; i < N; ++i) {
        a[i]=change(a[i]);
    }
}