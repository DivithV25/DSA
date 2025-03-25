class Solution {
    public:
        bool helper(vector<vector<int>>& it) {
            sort(it.begin(), it.end());
            int sections = 1;
            int maxEnd = it[0][1];
            for (vector<int>& vec : it) {
                int s = vec[0], e = vec[1];
                if (maxEnd <= s) {
                    sections++;
                }
                maxEnd = max(maxEnd, e);
            }
            return sections >= 3;
        }
        bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
            vector<vector<int>> x, y;
            for (auto rect : rectangles) {
                x.push_back({rect[0], rect[2]});
                y.push_back({rect[1], rect[3]});
            }
            return helper(x) || helper(y);
        }
    };