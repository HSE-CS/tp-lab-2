template<typename T, size_t size>

T* map(T *arr, T (* change)(T))
{
  for(size_t i = 0; i < size; ++i)
  {
    arr[i] = change(arr[i]);
  }
  return arr;
}
