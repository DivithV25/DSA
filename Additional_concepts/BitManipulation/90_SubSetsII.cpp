class Solution {
    public:
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            set<vector<int>> st;
            for (int num = 0; num < (1 << nums.size()); num++) {
                vector<int> ans;
                for (int j = 0; j < nums.size(); j++) {
                    if (num & (1 << j)) {
                        ans.push_back(nums[j]);
                    }
                }
                sort(ans.begin(),ans.end());
                st.insert(ans);
            }
            vector<vector<int>> answer(st.begin(), st.end());
            return answer;
        }
    };