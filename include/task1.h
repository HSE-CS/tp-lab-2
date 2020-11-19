//
// Created by toliman on 08.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>
#include <iostream>
#include <string>
#include <iostream>

template<typename T>
int compare(T first, T second) {
    return first <= second;
}


template<>
int compare(const char *first, const char *second) {
    return (int) (strlen(first) <= strlen(second));
}


template<typename T>
int len(T &array) {
    return sizeof(array) / sizeof(array[0]);
}

//template<>
//int len(const char **array) {
//    return sizeof(array) / sizeof(array[0]);
//}

// С третьим вариантом тоже не задалось, пишем четвертый
//
/////template<typename T>
//void merge(T *array, int first, int last) {
//   int start;
//   int middle;
//   int final;
//   int pointer;
//   T *temp = new T[50];
//  middle = (first + last) / 2;
//  start = first;
// final = middle + 1;
//  for (pointer = first; pointer <= last; ++pointer) {
//      if (start < middle && (final > last || compare(array[start], array[final]))) {
//          temp[pointer] = array[start];
//           start++;
//     } else {
//           temp[pointer] = array[final];
//           final++;
///       }
//  }
//  for (pointer = first; pointer < last; ++pointer) {
//       array[pointer] = temp[pointer];
//   }
//    delete[] temp;
//}

//template<typename T>
//void msort(T *array, int size, int first = 0, int last = -1) {
//   if (last == -1) last = size;
//  if (first < last) {
//       msort(array, size, first, (first + last) / 2);
//       msort(array, size, (first + last) / 2 + 1, last);
//       merge(array, first, last);
//   }
//}

//template<typename T>
//void print(T &array, int size) {
//    for (int i = 0; i < size; ++i)
//        std::cout << array[i] << ' ';
//    std::cout << '\n';
//}
//
//void printchar(char **array, int size) {
//    // for (int i = 0; i < size; ++i)
//    std::cout << array[2] << ' ';
//    std::cout << '\n';
//}

// Не сложилось не получилось
//
//template<typename T>
//T *merge(T &left, T &right, int size, T &array) {
//    auto result = new T[len(left) + len(right)];
//    int left_index = 0, right_index = 0;
//    while (left_index < len(left) && right_index < len(right)) {
//        if (compare(left[left_index], right[right_index])) {
//            result[left_index + right_index] = left[left_index++];
//        } else {
//            result[left_index + right_index] = right[right_index++];
//        }
//    }
//
//    while (left_index < len(left))
//        result[left_index + right_index] = left[left_index++];
//
//    while (right_index < len(right))
//        result[left_index + right_index] = right[right_index++];
//
//    if (len(left) + len(right) == size)
//        for (int i = 0; i < size; ++i) {
//            array[i] = result[i];
//        }
//    return result;
//}
//
//
//template<typename T>
//T *msort(T &array, unsigned int size) {
//    if (len(array) < 2)
//        return array;
//    int middle = len(array) / 2;
//    T *left_part = new T[middle];
//    T *right_part = new T[len(array) - middle];
//
//    for (int i = 0; i < middle; ++i)
//        left_part[i] = array[i];
//
//    for (int i = 0; i < len(array) - middle; ++i)
//        right_part[i] = array[i + middle];
//
//    auto left = msort(left_part, middle);
//    auto right = msort(right_part, len(array) - middle);
//    return merge(left, right, size, array);
//}


// Тоже не срослось, попробуем написать третий
//
//template<typename T>
//void merge(T *array, int left, int middle, int right) {
//    T *left_part = new T[middle - left + 1];
//    T *right_part = new T[right - middle];
//    for (int i = 0; i < middle - left + 1; ++i) left_part[i] = array[i + left];
//    for (int i = 0; i < right - middle; ++i) right_part[i] = array[i + middle + 1];
//    int left_index = 0, right_index = 0, base_index = left;
//    while (left_index < middle - left + 1 && right_index < right - middle) {
//        if (compare(left_part[left_index], right_part[right_index])) array[base_index++] = left_part[left_index++];
//        else array[base_index++] = right_part[right_index++];
//    }
//    while (left_index < middle - left + 1) array[base_index++] = left_part[left_index++];
//    while (right_index < right - middle) array[base_index++] = right_part[right_index++];
//}
//
//
//template<typename T>
//void msort(T *array, const int size, int left = 0, int right = -1) {
//
//    if (right == -1) right = size;
//
//
//    if (left < right) {
//        int middle = left + (right - left) / 2;
//        msort(array, size, left, middle);
//        msort(array, size, middle + 1, right);
//        merge(array, left, middle, right);
//    }
//}

int min(int f, int s) {
    return f < s ? f : s;
}

template<typename T>
void merge(T *array, T *temp, int i, int l, int size) {
    int j = i + l, n1 = min(j, size), n2 = min(j + l, size), k = i;
    while (i < n1 && j < n2) {
        if (compare(array[i], array[j]))
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];

    }
    while (i < n1) temp[k++] = array[i++];
    while (j < n2) temp[k++] = array[j++];
}

template<typename T>
void msort(T *array, int size) {
    T *temp = new T[size];
    int l = 1;

    while (l < size) {
        for (int i = 0; i < size; i += l * 2)
            merge(array, temp, i, l, size);
        l *= 2;
        for (int i = 0; i < size; i += l * 2)
            merge(temp, array, i, l, size);
        l *= 2;
    }


}

#endif //TASK1_TASK1_H
