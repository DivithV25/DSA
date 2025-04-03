class Solution {
    public:
        void helper(int i, int k, int target, vector<int>& answer,
                    vector<vector<int>>& result) {
            if (i > 9) {
    
                if (answer.size() == k) {
                    int sum = accumulate(answer.begin(), answer.end(), 0);
                    if (sum == target) {
    
                        result.push_back(answer);
                    }
                }
                return;
            }
            answer.push_back(i);
            helper(i + 1, k, target, answer, result);
            answer.pop_back();
            helper(i + 1, k, target, answer, result);
        }
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<vector<int>> result;
            vector<int> answer;
            helper(1, k, n, answer, result);
            return result;
        }
    };