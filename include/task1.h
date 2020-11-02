//
// Created by freeb on 02.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstddef>
#include <memory>
#include <cstring>

template<typename T>
bool comp(T a, T b){
    return a < b;
}

template<>
bool comp<char *>(char *a, char *b){
    return std::strlen(a) < std::strlen(b);
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
                tmp_array[i++] = std::move(arr[li]);
                li++;
            } else {
                tmp_array[i++] = std::move(arr[ri]);
                ri++;
            }
            if (li == l) {
                std::copy(std::make_move_iterator(&arr[ri]),
                        std::make_move_iterator(&arr[N]),
                        &tmp_array[i]);
                break;
            }
            if (ri == N) {
                std::copy(std::make_move_iterator(&arr[li]),
                        std::make_move_iterator(&arr[l]),
                        &tmp_array[i]);
                break;
            }
        }
        std::copy(std::make_move_iterator(&tmp_array[0]),
                std::make_move_iterator(&tmp_array[N]),
                &arr[0]);
    }
}

#endif //TASK1_TASK1_H
