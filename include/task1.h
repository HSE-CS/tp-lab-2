#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

template< typename T>
void mersort(T* A, int first, int last)
{
    if (first < last)
    {
        mersort(A, first, (first + last) / 2); //���������� ����� �����
        mersort(A, (first + last) / 2 + 1, last); //���������� ������ �����
        int middle, start, final, j;
        T* mas = new T[100];
        middle = (first + last) / 2; //���������� �������� ��������
        start = first; //������ ����� �����
        final = middle + 1; //������ ������ �����
        for (j = first; j <= last; j++) //��������� �� ������ �� �����
            if ((start <= middle) && ((final > last) || (A[start] < A[final])))
            {
                mas[j] = A[start];
                start++;
            }
            else
            {
                mas[j] = A[final];
                final++;
            }
        //����������� ���������� � ������
        for (j = first; j <= last; j++) A[j] = mas[j];
        delete[]mas;
    }
};

template<>
void mersort(char** A, int first, int last)
{
    if (first < last)
    {
        mersort(A, first, (first + last) / 2); //���������� ����� �����
        mersort(A, (first + last) / 2 + 1, last); //���������� ������ �����
        int middle, start, final, j;
        char** mas = new char*[100];
        middle = (first + last) / 2; //���������� �������� ��������
        start = first; //������ ����� �����
        final = middle + 1; //������ ������ �����
        for (j = first; j <= last; j++) //��������� �� ������ �� �����
            if ((start <= middle) && ((final > last) || (strlen(A[start]) < strlen(A[final]))))
            {
                mas[j] = A[start];
                start++;
            }
            else
            {
                mas[j] = A[final];
                final++;
            }
        //����������� ���������� � ������
        for (j = first; j <= last; j++) A[j] = mas[j];
        delete[]mas;
    }
};

template< typename T>
void msort(T* A, int n)
{
    n = n - 1;
    mersort(A, 0, n);
};