

template< typename T, size_t SIZE>
T* createArr(T(*gen)())
{
	T* arr = new T[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = gen();
	}
	return arr;
}
