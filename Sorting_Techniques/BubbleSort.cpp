#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    { // Move from o to n-1
        for (int j = 0; j <= i - 1; j++)
        { // j ends at second last elment becasuse you compare with j+1
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n = 5;
    int arr[n] = {3, 2, 5, 1, 4};
    bubblesort(arr, n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}