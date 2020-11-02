//
// Created by freeb on 02.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <algorithm>
#include <cstddef>
#include <iterator>
#include <memory>
#include <cstring>

using namespace std;

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
        std::unique_ptr<T[]> tmp_array(new T[N]);
        while (li < l || ri < N) {
            if (comp(arr[li], arr[ri])) {
                tmp_array[i++] = move(arr[li]);
                li++;
            } else {
                tmp_array[i++] = move(arr[ri]);
                ri++;
            }
            if (li == l) {
                copy(make_move_iterator(&arr[ri]),
                        make_move_iterator(&arr[N]),
                        &tmp_array[i]);
                break;
            }
            if (ri == N) {
                copy(make_move_iterator(&arr[li]),
                        make_move_iterator(&arr[l]),
                        &tmp_array[i]);
                break;
            }
        }
        copy(make_move_iterator(&tmp_array[0]),
                make_move_iterator(&tmp_array[N]),
                &arr[0]);
    }
}

#endif //TASK1_TASK1_H
