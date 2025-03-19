class Solution {
    public:
        int minSwaps(vector<int>& nums) {
            int totalOnes = count(nums.begin(), nums.end(), 1);
            if (totalOnes == 0)
                return 0;
    
            nums.insert(nums.end(), nums.begin(), nums.end());
    
            int oneCount = 0, maxOnes = 0;
            int left = 0, right = 0;
    
            while (right < totalOnes) {
                if (nums[right] == 1)
                    oneCount++;
                right++;
            }
            maxOnes = oneCount;
    
            while (right < nums.size()) {
                if (nums[right] == 1)
                    oneCount++;
                if (nums[left] == 1)
                    oneCount--;
                maxOnes = max(maxOnes, oneCount);
                left++;
                right++;
            }
    
            return totalOnes - maxOnes;
        }
    };