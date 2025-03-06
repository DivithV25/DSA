class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size();
            vector<int> answer((n * n) + 1, 0);
            vector<int> ans(2, 0);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    answer[grid[i][j]]++;
                }
            }
    
            int first = 0, second = 0;
            for (int i = 1; i < answer.size(); i++) {
                if (answer[i] == 2) {
                    ans[0] = i;
                }
                if (answer[i] == 0) {
                    ans[1] = i;
                }
            }
    
            return ans;
        }
    };