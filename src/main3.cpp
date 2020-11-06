#include <iostream>
#include "task3.h"

using namespace std;

template<typename T>
int func(T x)
{
  return x * x;
}

int main()
{
  const size_t n = 10;
  int* arr = new int[n];
  for (int i = 0; i < n; ++i)
  {
    i[arr] = i;
  }

  for(int i = 0; i < n; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << '\n';

  arr = map<int, n>(arr, func);

  for(int i = 0; i < n; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << '\n';
}
