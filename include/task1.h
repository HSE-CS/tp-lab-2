#pragma once
#include <cstring>

template<typename T>
bool less(T a, T b)
{
    return a < b;
}
template<>
bool less<char*>(char* a, char*b)
{
    return strlen(a) < strlen(b);
}

template<typename T>
void msort(T arr, const size_t size)
{
    if (size < 2)
        return;

    const size_t left_size  = size / 2;
    const size_t right_size = size - left_size;
 
    msort(arr, left_size);
    msort(&arr[left_size], right_size);

    size_t left_pos = 0,
           right_pos = left_size,
           tmp_arr_pos = 0;

    auto tmp = *arr;
    T tmp_arr = new decltype(tmp)[size];

    while (left_pos < left_size || right_pos < size)
    {
        if ( less(arr[left_pos], arr[right_pos]) )
        {
            tmp_arr[tmp_arr_pos++] = std::move(arr[left_pos]);
            left_pos++;
        }
        else
        {
            tmp_arr[tmp_arr_pos++] = std::move(arr[right_pos]);
            right_pos++;
        }

        if (left_pos == left_size)
        {
            for (;right_pos < size; right_pos++)
                tmp_arr[tmp_arr_pos++] = std::move(arr[right_pos]);
            break;
        }

        if (right_pos == size)
        {
            for (; left_pos < left_size; left_pos++)
                tmp_arr[tmp_arr_pos++] = std::move(arr[left_pos]);
            break;
        }
    }
    
    for ( size_t i = 0; i < size; i++)
        arr[i] = std::move(tmp_arr[i]);

    delete[] tmp_arr;
}

