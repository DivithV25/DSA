#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {3, 5, 2, 8, 1};
    // auto myLambda = [](int a, int b)
    // {
    //     return a > b;
    // };

    sort(vec.begin(), vec.end(), [](int a, int b)
    {
        return a > b;
    });
    for (auto i : vec)
    {
        cout << i << " ";
    }
}