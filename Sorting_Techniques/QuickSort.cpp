#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int low, int high)
{
    //taking pivot as first element 
    int pivot = arr[low];
    int count = 0;
    //counting the number of elements less the pivot and swapping it 
    for (int i = low + 1; i <= high; i++)
    {
        if (pivot >= arr[i])
        {
            count++;
        }
    }
    //finding pivot index
    int pivotindex = count + low;
    //swaping it to its original position 
    swap(arr[pivotindex],arr[low]);
    //all the elements to the left of the pivot are small and all the elements to the right of the pivot are large than the pivot element 
    int i = low, j = high;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
            swap(arr[i++], arr[j--]);
    }
    return pivotindex;
}

void quicksort(int *arr, int low, int high)
{
    if (low >= high)
        return;
//finding the pivotposition and calling quicksort to the left and right side of the array
    int p = partition(arr, low, high);

    quicksort(arr, low, p - 1);
    quicksort(arr, p + 1, high);
}

int main()
{
    int arr[5] = {3,2,5,4,3};
    int n = 5;
    quicksort(arr, 0, n - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}