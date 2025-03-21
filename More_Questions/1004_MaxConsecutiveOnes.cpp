class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int i = 0, j = 0;
        int n = nums.size();
        int max_length = 0;
        int zero = 0;
        while (j < n)
        {
            if (nums[j] == 0)
            {
                zero++;
            }
            while (zero > k)
            {
                if (nums[i] == 0)
                {
                    zero--;
                }
                i++;
            }
            max_length = max(max_length, j - i + 1);
            j++;
        }
        return max_length;
    }
};