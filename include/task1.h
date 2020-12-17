#ifndef TASK1_H
#define TASK1_H

using namespace std;

template <typename T>
void msort(T* arr, int n) {
	int middle = n / 2; // находим середину сортируемой последовательности и рекурсивно вызываем функцию сортировки для каждой половины
	if (n > 1) { msort(arr, n / 2); }
	if (n > 1) { msort(arr + (n / 2), n - (n / 2)); }
	T* NewArr = new T[n];
	int i = 0;   // индекс первого пути
	int j = middle; // индекс второго пути
	for (int k = 0; k < n; k++)
	{
		if ((j >= n) || ((i < n / 2) && (arr[i] < arr[j]))) // записываем в формируемую последовательность меньший из элементов двух путей или остаток первого пути если j > r
		{
			NewArr[k] = arr[i];
			i++;
		}
		else {
			NewArr[k] = arr[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = NewArr[i];
	}
}

template <>
void msort(char** arr, int n) {
	int middle = n / 2; // находим середину сортируемой последовательности и рекурсивно вызываем функцию сортировки для каждой половины
	if (n > 1) { msort(arr, n / 2); }
	if (n > 1) { msort(arr + (n / 2), n - (n / 2)); }
	char** NewArr = new char* [n];
	int i = 0;   // индекс первого пути
	int j = middle; // индекс второго пути
	for (int k = 0; k < n; k++)
	{
		if ((j >= n) || ((i < n / 2) && (strlen(arr[i]) < strlen(arr[j])))) // записываем в формируемую последовательность меньший из элементов двух путей или остаток первого пути если j > r
		{
			NewArr[k] = arr[i];
			i++;
		}
		else {
			NewArr[k] = arr[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = NewArr[i];
	}
}

#endif