#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min;
    int n = 5;
    int arr[n] = {3, 2, 5, 1, 4};
    for (int i = 0; i <= n - 2; i++)
    {
        min = i;
        for (int j = i; j <= n-1 ; j++)
        {
            if (arr[j] <= arr[min])
            {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
}