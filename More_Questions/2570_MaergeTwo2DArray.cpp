class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                        vector<vector<int>>& nums2) {
            vector<vector<int>> result;
            map<int, int> mp;
            for (int i = 0; i < nums1.size(); i++) {
                mp[nums1[i][0]] = nums1[i][1];
            }
            for (int j = 0; j < nums2.size(); j++) {
                mp[nums2[j][0]] += nums2[j][1];
            }
            for (auto it : mp) {
                result.push_back({it.first, it.second});
            }
            return result;
        }
    };