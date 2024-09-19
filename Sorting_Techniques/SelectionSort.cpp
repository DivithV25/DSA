#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min;
    int n = 5;
    int arr[n] = {3, 2, 5, 1, 4};
    for (int i = 0; i <= n - 2; i++) // Swap the minimum element with the first index of the silding array you go only till n-2 because last element have to ntgh to comapre with
    {
        min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}

// Time Complexity O(n^2)
//Minimum element to the left and leave that index for the next iteration