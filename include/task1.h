#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>
#include <cstring>

template<typename T>
bool comp(T a, T b){
    return (a < b);
}

template <>
bool comp<char*>(char* a, char* b){
    return strlen(a) < strlen(b);
}

template <typename T>
void msort(T* arr, unsigned int N){
    if (N > 1){
        unsigned int leftS = N/2;
        unsigned int rightS = N - leftS;

        T* leftArr = new T[leftS];
        T* rightArr = new T[rightS];

        for (unsigned int i = 0; i < leftS; i++)
            leftArr[i] = arr[i];
        msort(leftArr, leftS);

        for (unsigned int i = 0; i < rightS; i++)
            rightArr[i] = arr[i+ leftS];
        msort(rightArr, rightS);

        unsigned int i = 0;
        unsigned int j = 0;
        unsigned int k = 0;

        while (i != leftS && j != rightS){
            if (comp(leftArr[i], rightArr[j])){
                arr[k] = leftArr[i];
                k++;
                i++;
            }
            else {
                arr[k] = rightArr[j];
                k++;
                j++;
            }
        }

        while (i != leftS){
            arr[k] = leftArr[i];
            k++;
            i++;
        }

        while (j != rightS){
            arr[k] = rightArr[j];
            k++;
            j++;
        }
    }

}

#endif //TASK1_TASK1_H
