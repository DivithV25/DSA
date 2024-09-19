#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    { // Move from o to n-1
    int didswap=0;
        for (int j = 0; j <= i - 1; j++)
        { // j ends at second last elment becasuse you compare with j+1
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didswap=1;
            }
        }
        if(didswap==0)
         break;
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
//TIME COMPLEXITY BEST->O(N), AVERAGE , WORST ->O(N^2)
//COMPARE AND  SWAP EACH TIME LARGREST ELEMENT TO THE RIGHT SIDE AND LEAVE THAT INDEX TO THE NEXT ITERATIONN
