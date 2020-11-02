//
// Created by freeb on 02.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <algorithm>
#include <cstddef>
#include <iterator>
#include <cstring>

template<typename E>
bool comp(E a, E b){
    return a < b;
}

template<>
bool comp<char *>(char *a, char *b){
    return strlen(a) < strlen(b);
}

template<typename T>
void msort(T arr[], int N) noexcept
{
    if (N > 1) {
        const size_t l = N/2;
        const size_t r = N-l;

        msort(&arr[0], l);
        msort(&arr[l], r);

        size_t li = 0, ri = l, i = 0;
        T*  tmp_array = new T[N];
        while (li < l || ri < N) {
            if (comp(arr[li], arr[ri])) {
                tmp_array[i++] = arr[li];
                li++;
            } else {
                tmp_array[i++] = arr[ri];
                ri++;
            }
            if (li == l) {
                for (size_t w = ri; w < N; w++){
                    tmp_array[i+w-ri] = arr[w];
                }
                break;
            }
            if (ri == N) {
                for (size_t w = li; w < l; w++){
                    tmp_array[i+w-li] = arr[w];
                }
                break;
            }
        }
        for (size_t w = 0; w < N; w++){
            arr[w] = tmp_array[w];
        }
    }
}

#endif //TASK1_TASK1_H
