class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> Freq1(nums1.begin(),nums1.end());
        unordered_set<int> Freq2(nums2.begin(),nums2.end());
        vector<vector<int>> ans(2);
      
        for (auto i : Freq1) {
            if (Freq2.find(i) == Freq2.end()) {
                ans[0].push_back(i);
            }
        }
        for (auto i : Freq2) {
            if (Freq1.find(i) == Freq1.end()) {
                ans[1].push_back(i);
            }
        }
        return ans;
    }
};