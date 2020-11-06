template<typename T, size_t size>

T* map(T *arr, T (* gen)(T))
{
  for(size_t i = 0; i < size; ++i)
  {
    arr[i] = gen(arr[i]);
  }
  return arr;
}
