#ifndef TASK2_H
#define TASK2_H

//int gen() {
//	static int a = 0;
//	++a;
//	return a;
//}

template<typename T, size_t n>
T *createArr(T(*gen)()) {
	T *a = new T[n];
	for (size_t i = 0; i < n; ++i) 
		a[i] = gen();
	return a;
}

#endif 