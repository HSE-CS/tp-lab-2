
template<class T, size_t size>
void map(T (&arr)[size], T(*change)(T x)) {
	for (int i = 0; i < size; i++) {
		arr[i] = change(arr[i]);
	}
}