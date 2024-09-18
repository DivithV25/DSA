#include <bits/stdc++.h>
using namespace std;
class mycomparator
{
public:
    bool operator()(int a, int b)
    {
        if (a > b)
            return true;
        return false;
    }
};

int main()
{
    vector<int> arr = {1, 4, 3, 2, 7};
    sort(arr.begin(), arr.end(), mycomparator());
}