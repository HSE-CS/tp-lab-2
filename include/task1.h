#ifndef TASK1_H
#define TASK1_H

#include <string.h>

template <typename T>
bool first_less(T first, T second){
    return (first < second);
}

template <>
bool first_less(char *first, char *second){
    return (strlen(first) < strlen(second));
}

template <typename T>
void merge_two(T left, const int & left_size, T right, const int & right_size, T result, const int & result_size){
    int left_i = 0, right_i = 0;
    for(int i = 0; i < result_size; i++){
        //result[i] += ((left_i >= left_size) ? right[right_i++] : ((right_i >= right_size) ? left[left_i++] : ((first_less(left[left_i], right[right_i]) ? left[left_i++] : right[right_i++]))));
        bool all_avail = left_i < left_size && right_i < right_size;
        if(left_i < left_size && right_i < right_size){
            if(first_less(left[left_i], right[right_i])){
                result[i] = left[left_i++];
            }
            else{
                result[i] = right[right_i++];
            }
        }
        else{
            if(left_i < left_size){
                result[i] = left[left_i++];
            }
            else{
                result[i] = right[right_i++];
            }
        }
    }
}

template <typename T>
void msort(T arr[], int arr_size){
    if(arr_size > 1){
        int left_size = arr_size / 2 + arr_size % 2;
        int right_size = arr_size - left_size;

        T *left = new T[left_size];
        T *right = new T[right_size];

        for(int i = 0; i < arr_size; i++){
            if(i < left_size){
                left[i] = arr[i];
            }
            else{
                right[i - left_size] = arr[i];
            }
        }

        msort(left, left_size);
        msort(right, right_size);

        merge_two(left, left_size, right, right_size, arr, arr_size);

        delete[] left;
        delete[] right;
    }
}

#endif // TASK1_H
