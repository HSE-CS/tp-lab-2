//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef task1_h
#define task1_h

#include <iostream>
#include <string.h>
// 0 1 2 3
// 5 0 9 8

// 0 1 2 3 4
// 5 0 9 8 2

// 1 0 | 4 3 2
// 0 5 | 2 8 9

template<class T> T* msort_rec(T* arr, int *index_arr, int l, int r, unsigned int N2){
    if (r - l <= 0){
        T* new_arr = new T[1]{arr[l]};
        return new_arr;
    }
    
    int midl = ((r + l) / 2) + 1;
    int size1 = midl - l;
    int size2 = r - midl + 1;
    T* new_arr_L = msort_rec(arr, index_arr, l, midl - 1, N2);
    T* new_arr_R = msort_rec(arr, index_arr, midl, r, N2);
    
    T* arr_result = new T[size1 + size2];
    
    //copy index array
    int* index_arr_COPY = new int[N2];
    for (int i = 0; i < N2; i++)
        index_arr_COPY[i] = index_arr[i];
    
    int index = 0;
    int i = 0, j = 0;
    while(i < size1 || j < size2){
        if((i < size1) && (j >= size2 || new_arr_L[i] < new_arr_R[j])){
            // index change
            index_arr[l + index] = index_arr_COPY[l + i];
            
            arr_result[index] = new_arr_L[i];
            i++;
        } else{
            // index change
            index_arr[l + index] = index_arr_COPY[midl + j];
            
            arr_result[index] = new_arr_R[j];
            j++;
        }
        index++;
    }
    
    delete[] new_arr_L;
    delete[] new_arr_R;
    delete[] index_arr_COPY;
    return arr_result;
}

template<class T> void msort(T * arr, int N)
{
    int *index_arr = new int[N];
    for (int i = 0; i < N; i++)
        index_arr[i] = i;
    
    T* new_arr = msort_rec(arr, index_arr, 0, N-1, N);
    for(int i = 0; i < N; i++)
        arr[i] = new_arr[i];
    
    delete [] index_arr;
    delete [] new_arr;
}

template<> void msort(char** a, int N)
{
    int *index_arr = new int[N];
    unsigned int *to_sort_arr = new unsigned int[N];
    for (int i = 0; i < N; i++){
        index_arr[i] = i;
        to_sort_arr[i] = strlen(a[i]);
    }

    char** new_a = new char*[N];
    // sort strings length
    unsigned int* new_arr = msort_rec(to_sort_arr, index_arr, 0, N-1, N);
    // now we have sorted indexes = index_arr
    
    // create a sorted copy
    for (int i = 0; i < N; i++){
        new_a[i] = new char[strlen(a[index_arr[i]])];
        strcpy(new_a[i], a[index_arr[i]]);
    }
    //move to original array
    for(int i = 0; i < N; i++){
        a[i] = new_a[i];
    }
//    //move to original array
//    for (int i = 0; i < N; i++){
//        delete[] a[i];
//        a[i] = new char[strlen(new_a[i])];
//        strcpy(a[i], new_a[i]);
//    }
    
    delete [] index_arr;
    delete [] to_sort_arr;
//    delete [] new_a;
    delete [] new_arr;
}

#endif /* task1_hpp */
