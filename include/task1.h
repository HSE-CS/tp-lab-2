#include <algorithm>
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;


template<typename T>
bool comp(T a, T b) {
	return (a < b);
}

template<>
bool comp<char*>(char* a, char* b) {
	return strlen(a) <= strlen(b);
}


template<typename T>
void msort(T* A, size_t size) {
	if (size > 1) {
		size_t split{ size / 2 };
		size_t Llen{ split }, Rlen{ size - split };
		T* L = new T[Llen], * R = new T[Rlen];
		for (unsigned int i = 0; i < Llen; i++) {
			L[i] = A[i];
		}
		for (unsigned int i = 0; i < Rlen; i++) {
			R[i] = A[i + split];
		}
		msort(L, Llen);
		msort(R, Rlen);
		unsigned int Ri{ 0 }, Li{ 0 };
		while (Ri < Rlen && Li < Llen) {
			if (comp(R[Ri], L[Li])) {
				A[Ri + Li] = R[Ri];
				Ri++;
			}
			else {
				A[Ri + Li] = L[Li];
				Li++;
			}
		}
		while (Li < Llen) {
			A[Ri + Li] = L[Li];
			Li++;
		}
		while (Ri < Rlen) {
			A[Li + Ri] = R[Ri];
			Ri++;
		}
	}
}