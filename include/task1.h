#include <iostream>
#include <cstring>

// ��������� ����� �����
bool compare(char*a, char*b) {
	return strlen(a) < strlen(b);
}

// ��������� �����
template<typename T>
bool compare(T a, T b) {
	return a < b;
}

// ������� �������
template<typename T>
void Merge(T* arr, int left, int right) {
	int middle, begin, end, i = 0;
	T* mas = new T[right + 1];
	if (left == right) return; // ������� ����������
	middle = (left + right) / 2; //���������� �������� ��������
	begin = left; //������ ������� ����
	end = middle + 1; //������ ������� ����
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
	// ���������� ��������� � ������
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
		MergeSort(arr, left, (left + right) / 2); //���������� ����� �����
		MergeSort(arr, (left + right) / 2 + 1, right); //���������� ������ �����
		Merge(arr, left, right); //������� ���� ������
	}
}

template<typename T>
void msort(T* arr, size_t size)
{
	int left = 0;
	int right = size - 1;
	MergeSort(arr, left, right);
}