class Solution {
    public:
        int n;
        void recursiveCall(int i, int sum, vector<int>& arr, vector<int>& arr1,
                           int target, vector<vector<int>>& answer) {
            if (i == n) {
                if (sum == target) {
                    answer.push_back(arr1);
                }
                return;
            }
            if (sum <= target) {
                arr1.push_back(arr[i]);
                recursiveCall(i, sum + arr[i], arr, arr1, target, answer);
                arr1.pop_back();
            }
            recursiveCall(i + 1, sum, arr, arr1, target, answer);
        }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    
            vector<vector<int>> answer;
            vector<int> arr1;
            n = candidates.size();
            recursiveCall(0, 0, candidates, arr1, target, answer);
            return answer;
        }
    };