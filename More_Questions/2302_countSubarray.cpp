class Solution {
    public:
        long long countSubarrays(vector<int>& nums, long long k) {
            long long sum = 0;
            int n = nums.size();
            int i = 0;
            long long count = 0;
            for (int j = 0; j < n; j++) {
                sum += nums[j];
                int size = j - i + 1;
                while (sum * size >= k) {
                    sum -= nums[i];
                    i++;
                    size--;
                }
                count += size;
            }
            return count;
        }
    };