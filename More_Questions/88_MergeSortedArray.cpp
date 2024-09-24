class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        int index1 = 0, index2 = 0;
        while (index1 < m && index2 < n) {
            if (nums1[index1] <= nums2[index2]) {
                nums3.push_back(nums1[index1++]);
            } else {
                nums3.push_back(nums2[index2++]);
            }
        }
        while (index1 < m) {
            nums3.push_back(nums1[index1++]);
        }
        while (index2 < n) {
            nums3.push_back(nums2[index2++]);
        }

        for (int i = 0; i < nums1.size(); i++) {
            nums1[i] = nums3[i];
        }
    }
};