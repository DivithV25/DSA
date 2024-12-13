class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0;
        int n = nums.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        vector<bool> visited(n, false);
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }
        while (!pq.empty()) {
            auto x = pq.top();
            pq.pop();
            int in = x.second;
            int el = x.first;
            if (!visited[in]) {
                visited[in] = true;
                score += el;
                if (in - 1 >= 0 && !visited[in - 1]) {
                    visited[in - 1] = true;
                }
                if (in + 1 < n && !visited[in + 1]) {
                    visited[in + 1] = true;
                }
            }
        }
        return score;
    }
};