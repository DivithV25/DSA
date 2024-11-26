class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> degree(n, 0);
        for (auto& edge : edges) {
            degree[edge[1]]++;
        }
        vector<int> answer;
        for (int i = 0; i < n; i++) {
            if (degree[i] == 0) {
                answer.push_back(i);
            }
        }
        if (answer.size() > 1) {
            return -1;
        }
        return answer[0];
    }
};