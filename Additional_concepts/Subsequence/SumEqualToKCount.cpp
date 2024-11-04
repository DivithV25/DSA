class Solution
{
public:
    bool SubArrayCount(int idx, vector<int> &nums, vector<int> &arr, int k,
                       int sum)
    {
        if (idx == nums.size())
        {
            if (sum == k)
            {

                return 1;
            }
            return 0;
        }
        // arr.push_back(nums[idx]);
        sum += nums[idx];
        int l = (SubArrayCount(idx + 1, nums, arr, k, sum));

        // arr.pop_back();
        sum -= nums[idx];
        int r = (SubArrayCount(idx + 1, nums, arr, k, sum));

        return l + r;
    }
};