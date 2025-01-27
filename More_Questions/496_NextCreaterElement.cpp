class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> answer(nums1.size(), -1);
        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = i;
        }
        for (int i = 0; i < nums1.size(); i++) {
            int index = mp[nums1[i]];
            int maxi = nums2[index];
            for (int j = index; j < nums2.size(); j++) {
                if (maxi < nums2[j]) {
                    answer[i] = nums2[j];
                    break;
                }
            }
        }
        return answer;
    }
};