class Solution {
    public:
        int minimumIndex(vector<int>& nums) {
            int n = nums.size();
            unordered_map<int, int> freq;
            int dom = 0, cnt = 0;
    
            for (int num : nums) {
                int cur = freq[num];
                if (cur + 1 > cnt) {
                    dom = num;
                    cnt = cur + 1;
                }
                freq[num] = cur + 1;
            }
    
            int left = 0;
            for (int i = 0; i < n - 1; i++) {
                if (nums[i] == dom)
                    left++;
                int right = cnt - left;
    
                if (left > (i + 1) / 2 && right > (n - 1 - i) / 2) {
                    return i;
                }
            }
    
            return -1;
        }
    };