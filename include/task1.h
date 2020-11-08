#include <iostream>
#include <cstring>

// сравнение длины строк
bool compare(char*a, char*b) {
	return strlen(a) < strlen(b);
}

// сравнение чисел
template<typename T>
bool compare(T a, T b) {
	return a < b;
}

// сливаем массивы
template<typename T>
void Merge(T* arr, int left, int right) {
	int middle, begin, end, i = 0;
	T* mas = new T[right + 1];
	if (left == right) return; // границы сомкнулись
	middle = (left + right) / 2; //вычисление среднего элемента
	begin = left; //начало первого пути
	end = middle + 1; //начало второго пути
	for (i = left; i <= right; ++i) {

		if ((begin <= middle) && ((end > right) || (compare(arr[begin], arr[end])))) {
			mas[i] = arr[begin];
			begin++;
		}
		else {
			mas[i] = arr[end];
			end++;
		}
	}
	// записываем результат в список
	for (i = left; i <= right; ++i)
	{
		arr[i] = mas[i];
	}
	delete[]mas;
}

template<typename T>
void mergeSort(T* arr, int left, int right) {
	if (left < right)
	{
		MergeSort(arr, left, (left + right) / 2); //сортировка левой части
		MergeSort(arr, (left + right) / 2 + 1, right); //сортировка правой части
		Merge(arr, left, right); //слияние двух частей
	}
}

template<typename T>
void msort(T* arr, size_t size)
{
	int left = 0;
	int right = size - 1;
	MergeSort(arr, left, right);
}