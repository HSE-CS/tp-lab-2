#ifndef TEST_TASK1_H
#define TEST_TASK1_H
#include <string>
#include <cstring>


template<typename T>
int comp(T first, T second){
    T d = first - second;
    if (d > 0){
        return 1;
    }else if (d < 0){
        return -1;
    }
    return 0;
}

template<>
int comp(char* first, char* second){
    int d = strlen(first) - strlen(second);
    if (d > 0){
        return 1;
    }else if (d < 0){
        return -1;
    }
    return 0;
}

template <typename T>
void merge(T* mas, int left, int mid, int right){
    left -= 1;
    mid -= 1;
    right -= 1;
    int left_len = mid - left + 1, right_len = right - mid;
    T* res_left = new T[left_len];
    T* res_right = new T[right_len];

    for(int i = 0; i < left_len; i++){
        res_left[i] = mas[left + i];
    }

    for(int j = 0; j < right_len; j++){
        res_right[j] = mas[mid + 1 + j];
    }

    int cur = left;
    int i = 0;
    int j = 0;
    while (i < left_len && j < right_len){
        if (comp(res_left[i], res_right[j]) < 0){
            mas[cur] = res_left[i];
            i++;
        } else {
            mas[cur] = res_right[j];
            j++;
        }
        cur++;
    }

    while (i < left_len){
        mas[cur] = res_left[i];
        i++;
        cur++;
    }

    while (j < right_len){
        mas[cur] = res_right[j];
        j++;
        cur++;
    }


    delete[] res_left;


    delete[] res_right;
}

template <class T>
void msort(T* arr, int right, int left = 1){
    if (right > left){
        int mid = (left + right - 2) / 2 + 1;
        msort(arr, mid, left);
        msort(arr, right, mid + 1);
        merge(arr, left, mid, right);
    }
}

#endif //TEST_TASK1_H
