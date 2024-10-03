class Solution
{
public:
    int minSubarray(vector<int> &nums, int p)
    {
        long totalsum = 0;
        for (int num : nums)
            totalsum += num;
        int remainder = totalsum % p;
        if (remainder == 0)
            return 0;
        unordered_map<int, int> prefixMap;
        prefixMap[0] = -1;
        long prefixSum = 0;
        int minlen = nums.size();

        for (int i = 0; i < nums.size(); i++)
        {
            prefixSum += nums[i];
            int currmod = prefixSum % p;
            int targetmod = (currmod - remainder + p) % p;

            if (prefixMap.count(targetmod))
            {
                minlen = min(minlen, i - prefixMap[targetmod]);
            }
            prefixMap[currmod] = i;
        }
        return (minlen == nums.size()) ? -1 : minlen;
    }
};