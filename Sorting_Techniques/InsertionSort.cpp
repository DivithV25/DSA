#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main()
{
    int n = 5;
    int arr[5] = {1, 4, 3, 2, 5};
    insertion_sort(arr,n);
    for(auto i:arr){
        cout<<i<<" ";
    }
}