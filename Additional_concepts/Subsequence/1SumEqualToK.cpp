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
                for (auto i : arr)
                {
                    cout << i << " ";
                }
                return true;
            }
            return false;
        }
        arr.push_back(nums[idx]);
        sum += nums[idx];
        if (SubArrayCount(idx + 1, nums, arr, k, sum) == true)
            return true;
        arr.pop_back();
        sum -= nums[idx];
        if (SubArrayCount(idx + 1, nums, arr, k, sum) == true)
            return true;

        return false;
    }
   
};