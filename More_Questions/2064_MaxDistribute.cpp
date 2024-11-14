class Solution
{
public:
    bool possible(int x, vector<int> &quantities, int n)
    {
        for (auto &product : quantities)
        {
            n -= (product + x - 1) / x; // ceil(product/x)
            if (n < 0)
            {
                return false;
            }
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int> &quantities)
    {
        int m = quantities.size();
        int l = 1;
        int r = *max_element(quantities.begin(), quantities.end());
        int result = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (possible(mid, quantities, n))
            {
                result = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return result;
    }
};