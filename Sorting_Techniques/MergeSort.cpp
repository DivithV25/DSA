#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int low, int high)
{

    int mid = (low + high) / 2;
    int len1 = mid - low + 1;
    int len2 = high - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int x = low;
    int y = mid + 1;
    for (int i = 0; i < len1; i++)
    {

        arr1[i] = arr[x++];
    }

    for (int i = 0; i < len1; i++)
    {

        arr2[i] = arr[y++];
    }
    int index1 = 0, index2 = 0;
    int mainarray = low;
    while (index1 < len1 && index2 < len2)
    {

        if (arr1[index1] < arr2[index2])
        {

            arr[mainarray++] = arr1[index1++];
        }
        else
            arr[mainarray++] = arr2[index2++];
    }

    while (index1 < len1)
    {
        arr[mainarray++] = arr1[index1++];
    }

    while (index2 < len2)
    {
        arr[mainarray++] = arr2[index2++];
    }
}
void mergesort(int *arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, high);
}

int main()
{

    int arr[11] = {54, 455, 24, 34, 1,234,43,234,345,24342,1};
    int n = 11;
    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}