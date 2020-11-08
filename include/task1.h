#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <cstring>
// Функция сортировки двухпутевым слиянием
template<class T>
T* merge(T *m1, T* m2, int l1, int l2)
{
    T* ret = new T[l1+l2];
    int n = 0;
    // Сливаем массивы, пока один не закончится
    while (l1 && l2) {
        if (*m1 < *m2) {
            ret[n] = *m1;
            m1++;
            --l1;
        } else {
            ret[n] = *m2;
            ++m2;
            --l2;
        }
        ++n;
    }
    // Если закончился первый массив
    if (l1 == 0) {
        for (int i = 0; i < l2; ++i) {
            ret[n++] = *m2++;
        }
    } else { // Если закончился второй массив
        for (int i = 0; i < l1; ++i) {
            ret[n++] = *m1++;
        }
    }
    return ret;
}
  

template <class T>
void msort(T * mas, int len)
{
    int n = 1, l, ost;
    T * mas1;
    while (n < len) {
        l = 0;
        while (l < len) {
            if (l + n >= len) break;
            ost = (l + n * 2 > len) ? (len - (l + n)) : n;
            mas1 = merge(mas + l, mas + l + n, n, ost);
            for (int i = 0; i < n + ost; ++i)
                mas[l+i] = mas1[i]; 
            delete [] mas1;
            l += n * 2;
        }
        n *= 2;
    }
}
void copy(char*& _str1, char*& _str2) {
	_str1 = _str2;
}

unsigned int min(unsigned int a, unsigned int b) {
	if (a < b) {
		return a;
	}
	return b;
}
template<>
void msort<char*>(char** arr,  int n) {

	
	char** _res = new char* [n];
	for (size_t k = 0; k < n; ++k) {
		_res[k] = new char[n];
	}

	
	for (size_t i = 1; i < n; i *= 2) {
		for (size_t j = 0; j < n - i; j += 2 * i) {

			unsigned int _iter1{ 0 };
			unsigned int _iter2{ 0 };
			unsigned int middle = j + i;
			unsigned int right =  min(j + 2 * i, n);
			unsigned int left = j;
			
			while ((_iter1 + left < middle) && (_iter2 + middle < right)) {
				if (strlen(arr[left + _iter1]) < strlen(arr[middle + _iter2])) {
					copy(_res[_iter1 + _iter2], arr[left + _iter1]);
					_iter1++;
				}
				else {
					copy(_res[_iter1 + _iter2], arr[middle + _iter2]);
					_iter2++;
				}
			}

			while (left + _iter1 < middle) {
				copy(_res[_iter1 + _iter2], arr[left + _iter1]);
				_iter1++;
			}
			while (middle + _iter2 < right) {
				copy(_res[_iter1 + _iter2], arr[middle + _iter2]);
				_iter2++;
			}

			for (size_t w = 0; w < _iter1 + _iter2; ++w) {
				copy(arr[left + w], _res[w]);
			}
		}
	}
}







