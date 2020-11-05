#ifndef TASK3_H
#define TASK3_H

template<typename T, size_t arrSize> T* createArr(T (*gen)())
{
	T* newArr = new T[arrSize];

	for (int i = 0; i < arrSize; i++) {
		newArr[i] = gen();
	}

	return newArr;
}

#endif