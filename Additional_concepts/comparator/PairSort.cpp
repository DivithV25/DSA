#include <bits/stdc++.h>
using namespace std;
bool mycomparator(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}
void print(vector<pair<int, int>> &arr)
{
    for (auto i : arr)
    {
        cout << i.first << ":" << i.second << "; ";
    }
}
int main()
{
    vector<pair<int, int>> arr = {{2, 3}, {2, 4}, {3, 1}};
    sort(arr.begin(), arr.end(), mycomparator);
    print(arr);
}