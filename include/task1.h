#define task1_h
#include <iostream>


template <typename T> void msort(T* val, int n){
	int h = 1;
	int* arr = (int*)malloc(n * sizeof(int));
	while (h<n){
		int index = 0;
		int left=0;
		int middle = left + h;
		int right = left + h * 2;
		do {
			middle = middle < n ? middle : n;
			right = right < n ? right : n;
			int i1 = left, i2 = middle;
			for (; i1 < middle && i2 < right; ) {
				if (val[i1] < val[i2])  arr[index++] = val[i1++]; 
				else arr[index++] = val[i2++]; 
			}
			while (i1 < middle) arr[index++] = val[i1++]; 
			while (i2 < right) arr[index++] = val[i2++]; 
			left += h * 2;
			middle += h * 2;
			right += h * 2;
		} while (left < n); 
		for (int i = 0; i < n; i++) 
			val[i] = arr[i];
		h *= 2; 
	}
}

template<> void msort<>(char** val, int n) {
	int h = 1;
	char** arr = (char**)malloc(n * sizeof(char*));
	while (h < n) {
		int index = 0;
		int left = 0;
		int middle = left + h;
		int right = left + h * 2;
		do {
			middle = middle < n ? middle : n;
			right = right < n ? right : n;
			int i1 = left, i2 = middle;
			for (; i1 < middle && i2 < right; ) {
				if (strlen(val[i1]) < strlen(val[i2]))  arr[index++] = val[i1++];
				else arr[index++] = val[i2++];
			}
			while (i1 < middle) arr[index++] = val[i1++];
			while (i2 < right) arr[index++] = val[i2++];
			left += h * 2;
			middle += h * 2;
			right += h * 2;
		} while (left < n);
		for (int i = 0; i < n; i++)
			val[i] = arr[i];
		h *= 2;
	}
}

