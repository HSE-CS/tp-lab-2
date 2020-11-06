#include <string.h>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;


template <class T>
bool comparasion(T a, T b)
{
  return (a < b);
}

template <> bool comparasion <const char*> (const char* a, const char* b)
{
    return strcmp(a, b) < 0;
}




template <typename T>
T* merge(T* array, T *left_arr, T *right_arr, int left, int right)
{
  int index_left = 0;
  int index_right = 0;

  while ((index_left < left) && (index_right < right))
  {
    if (comparasion(left_arr[index_left], right_arr[index_right]))
    {
      array[index_left + index_right] = left_arr[index_left];
      index_left++;
    }

    else
    {
      array[index_left + index_right] = right_arr[index_right];
      index_right++;
    }
  }

  while(index_left  < left)
  {
    array[index_left + index_right] = left_arr[index_left];
    index_left++;
  }

  while(index_right < right)
  {
    array[index_left  + index_right] = right_arr[index_right];
    index_right++;
  }
}

template <typename T>
void msort(T *arr, int n)
{
  if (n  <= 1)
  {
    return;
  }

  int left = n / 2;
  int right = n - left;

  T *left_arr = new T[left];
  for (int i = 0; i < left; ++i)
    left_arr[i] = arr[i];

  T *right_arr = new T[right];
  for (int i = 0; i < right; ++i)
    right_arr[i] = arr[left + i];


    // for (int i = 0; i < left; ++i)
    //   cout << left_arr[i] << " ";
    // cout << endl;
    //
    //
    // for (int i = 0; i < right; ++i)
    //   cout << right_arr[i] << " ";
    // cout << endl;


  T *buffer = new int[n];

  msort(left_arr, left);
  msort(right_arr, right);

  merge<T>(arr, left_arr, right_arr, left, right);

}
