#include <string.h>
#include <string>
#include <cstring>


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
void merge(T *array, T *buffer, int left, int right, int middle)
{
  int index_left = 0;
  int index_right = 0;

  while ((left + index_left < middle) && (middle + index_right < right))
  {
    if (comparasion(array[left + index_left], array[middle + index_right]))
    {
      buffer[index_left + index_right] = array[left + index_left];
      index_left++;
    }

    else
    {
      buffer[index_left + index_right] = array[middle + index_right];
      index_right++;
    }
  }

  while(left + index_left  < middle)
  {
    buffer[index_left + index_right] = array[left + index_left];
    index_left++;
  }

  while(middle + index_right < right)
  {
    buffer[index_left  + index_right] = array[middle + index_right];
    index_right++;
  }

  for(int i = 0; i < index_left + index_right; ++i)
  {
    array[left + i] = buffer[i];
  }
}

template <typename T>
void msort(T *array, T *buffer, int left, int right)
{
  if (right - left <= 1)
  {
    return;
  }
  int middle = (right + left) / 2;
  merge_sort(array, buffer, left, middle);
  merge_sort(array, buffer, middle, right);

  merge<T>(array, buffer, left, right, middle);
}
