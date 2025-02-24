class Solution {
    public:
        void recursiveCall(int i, int target, vector<int>& candidates,
                           vector<int>& arr1, vector<vector<int>>& answer) {
    
            if (target == 0) {
                answer.push_back(arr1);
                return;
            }
            for (int j = i; j < candidates.size(); j++) {
                if (j > i && candidates[j] == candidates[j - 1])   // to make sure that the same element is not taken in the same iteration this will avoid multiple entries as moving forward
                    continue;
                if (candidates[j] > target)
                    break;
                arr1.push_back(candidates[j]);
                recursiveCall(j + 1, target - candidates[j], candidates, arr1,
                              answer);
                arr1.pop_back();
            }
        }
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            sort(candidates.begin(), candidates.end());
            vector<vector<int>> answer;
            vector<int> arr1;
            recursiveCall(0, target, candidates, arr1, answer);
            return answer;
        }
    };