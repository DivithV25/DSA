class Solution {
    public:
        int countCompleteSubarrays(vector<int>& nums) {
            set<int> st(nums.begin(), nums.end());
            int m = st.size();
            unordered_map<int, int> mp;
            int count = 0, j = 0, n = nums.size();
    
            for (int i = 0; i < n; ++i) {
    
                while (j < n && mp.size() < m) {
                    mp[nums[j]]++;
                    j++;
                }
    
                if (mp.size() == m) {
                    count += (n - j + 1);
                }
    
                mp[nums[i]]--;
                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
            }
    
            return count;
        }
    };