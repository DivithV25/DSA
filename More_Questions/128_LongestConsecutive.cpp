class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;

        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;

        for (int num : numSet) {

            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentLength = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentLength++;
                }

                maxLength = max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
};