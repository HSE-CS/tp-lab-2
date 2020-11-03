#ifndef TASK2_H
#define TASK2_H

template<class T>
T gen()
{
	static int t = 48;
	return t++;
}
template<>
char* gen()
{
	static unsigned t = 0;
	t++;
	char* s = new char[t + 1];

	for (size_t i = 0; i < t; i++)
		s[i] = '0' + i;
	s[t] = '\0';

	return s;
}

template <typename T, size_t size>
T* createArr(T (*fun) ()) {
	T* arr = new T[size]{ 0 };
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = fun();
	}
	return arr;
}


#endif
