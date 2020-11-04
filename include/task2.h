#ifndef TASK2_H
#define TASK2_H

template <typename T, size_t size> T* createArr(T (*fun) ()) {
	T* arr = new T[size]{ 0 };
	for (auto& it : arr)
	{
		it = fun();
	}
	return arr;
}


#endif
