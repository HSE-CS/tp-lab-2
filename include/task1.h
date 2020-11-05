#ifndef TASK1_H
#define TASK1_H
#include <string.h>


template<typename E> void merge(E* initialArr, int firstInd, int lastInd)
{
	int midInd = (firstInd + lastInd) / 2, startInd = firstInd;
	int finalInd = midInd + 1, ind = 0;
	E *temp = new E[lastInd - firstInd + 1];

	for (int i = 0; i <= lastInd - firstInd; i++) {
		if ((startInd <= midInd) && ((finalInd > lastInd) || (initialArr[startInd] < initialArr[finalInd]))) {
			temp[i] = initialArr[startInd++];
		}
		else {
			temp[i] = initialArr[finalInd++];
		}
	}

	for (int i = firstInd; i <= lastInd; i++) {
		initialArr[i] = temp[ind++];
	}

	delete[] temp;
	return;
}


template<> void merge(char** initialArr, int firstInd, int lastInd)
{
	int midInd = (firstInd + lastInd) / 2, startInd = firstInd;
	int finalInd = midInd + 1, ind = 0;
	char **temp = new char*[lastInd - firstInd + 1];

	for (int i = 0; i <= lastInd - firstInd; i++) {
		if ((startInd <= midInd) && ((finalInd > lastInd) || (strlen(initialArr[startInd]) < strlen(initialArr[finalInd])))) {
			temp[i] = initialArr[startInd++];
		}
		else {
			temp[i] = initialArr[finalInd++];
		}
	}

	for (int i = firstInd; i <= lastInd; i++) {
		initialArr[i] = temp[ind++];
	}

	delete[] temp;
	return;
}


template<typename T> void msort(T* initialArr, int firstInd, int lastInd)
{
	if (firstInd<lastInd) {
		msort(initialArr, firstInd, (firstInd + lastInd) / 2);
		msort(initialArr, (firstInd + lastInd) / 2 + 1, lastInd);
		merge(initialArr, firstInd, lastInd);
	}

	return;
}


#endif
