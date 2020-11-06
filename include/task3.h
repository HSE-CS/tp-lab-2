
template <typename T, size_t SIZE> 
void map(T(&arr)[SIZE], T(*change)(T a ))
{
	for (int i = 0; i < SIZE; i++) {
		arr[i] = change(arr[i]);
	}
	
}
