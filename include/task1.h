#ifndef TASK1_H
#define TASK1_H
#include <string.h>
#include <iostream>


template <typename T> 
void msort(T* a, int n){
	int mid = (n + 1) / 2;
	//std::cout << '(' << mid << ")\n";
	T* c = (T*)malloc(n * sizeof(T));
	for (int h = 1; h < n; h *= 2) {
		int i = 0;
		int j = mid;
		int k = 0;
		for (int step = h; step <= mid; step += h) {
			while ((i < step) && (j < n) && (j < (mid + step))){
				if (a[i] < a[j]){
					c[k] = a[i];
					i++; k++;
				} else {
					c[k] = a[j];
					j++; k++;
				}
			}
			while (i < step){
				c[k] = a[i];
				i++; k++;
			}
			while ((j < (mid + step)) && (j < n)){
				c[k] = a[j];
				j++; k++;
			}
		}
		for (i = 0; i < n; i++)
			a[i] = c[i];
	}
}
template<> 
void msort<>(char** a, int n){
	int mid = (n + 1) / 2;

	char** c = (char**)malloc(n * sizeof(char*));
	for (int h = 1; h < n; h *= 2) {
		int i = 0;
		int j = mid;
		int k = 0;
		for (int step = h; step <= mid; step += h) {
			while ((i < step) && (j < n) && (j < (mid + step))){
				if (strlen(a[i]) < strlen(a[j])){
					c[k] = a[i];
					i++; k++;
				} else {
					c[k] = a[j];
					j++; k++;
				}
			}
			while (i < step){
				c[k] = a[i];
				i++; k++;
			}
			while ((j < (mid + step)) && (j < n)){
				c[k] = a[j];
				j++; k++;
			}
		}
		for (i = 0; i < n; i++)
			a[i] = c[i];
	}
}
#endif 