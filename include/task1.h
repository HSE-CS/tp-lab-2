//RogozyanAnastasiya
template <typename T> bool cmp(T a, T b) {
    return a < b;
}
template<> bool cmp(char* a, char* b) {
    return strlen(a) < strlen(b);
}


template <typename T>
void msort (T arr[], int size, int l = -2, int r = -1) {
    if(size <= 1)
        return;

    if(l >= r)
        return;

    if(l == -2)
        l = 0;
    if(r == -1)
        r = size - 1;
    int m = l + (r - l) / 2;
    msort(arr, size, l, m);
    msort(arr, size, m + 1, r);
    int size1 = m - l + 1;
    int size2 = r - m;
    T L[size1], R[size2];

    for(int i = 0; i < size1; i++)
        L[i] = arr[l + i];
    for(int j = 0; j < size2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;
    while (i < size1 && j < size2)
    {
        if (cmp(L[i], R[j]))
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < size1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
