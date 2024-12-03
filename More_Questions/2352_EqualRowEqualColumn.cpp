class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string, int> rw;
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            string temp = "";
            for (int j = 0; j < m; j++) {
                temp += to_string(grid[i][j]);
                temp += " ";
            }
            cout << temp << " ";
            rw[temp] += 1;
        }

        for (int i = 0; i < n; i++) {
            string temp = "";
            for (int j = 0; j < m; j++) {
                temp += to_string(grid[j][i]);
                temp += " ";
            }
            if (rw[temp])
                ans += rw[temp];
        }
        return ans;
    }
};