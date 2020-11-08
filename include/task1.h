#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>


template<class T>
bool comparator(T a, T b) {
	return (a < b);
}

template<> bool comparator<char*>(char* a, char* b) {
	return strlen(a) < strlen(b);
}

template<class T>
void msort(T* a, int n) {
	if (n > 1) {
		int firsthalf = n / 2;
		int secondhalf = n - firsthalf;
		T* new_a = new T[firsthalf];
		for (int i = 0; i < firsthalf; i++) {
			new_a[i] = a[i];
		}
		msort(new_a, firsthalf);
		T* new_r = new T[secondhalf];
		for (int i = 0; i < secondhalf; i++) {
			new_r[i] = a[i + firsthalf];
		}
		msort(new_r, secondhalf);
		int firstind = 0, secondind = 0;
		for (int i = 0; i < n; i++) {
			if (firstind < firsthalf && secondind < secondhalf) {
				if (comparator(new_a[firstind], new_r[secondind])) {
					a[i] = new_a[firstind];
					firstind++;
				}
				else {
					a[i] = new_r[secondind];
					secondind++;
				}
			}
			else if (firstind == firsthalf) {
				a[i] = new_r[secondind];
				new_r++;
			}
			else if (secondind == secondhalf) {
				a[i] = new_a[firstind];
				new_a++;
			}
		}
	}

}
