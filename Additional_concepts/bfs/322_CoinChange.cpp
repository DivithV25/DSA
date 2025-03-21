class Solution {
    public:
        int coinChange(vector<int>& coins, int amount) {
            if (amount == 0)
                return 0;
            queue<pair<int, int>> q;
            q.push({0, 0});
    
            vector<bool> visited(amount + 1, false);
            visited[0] = true;
            while (!q.empty()) {
                auto it = q.front();
                q.pop();
    
                for (int it1 : coins) {
                    int newVal = it.first + it1;
                    if (newVal == amount) {
                        return it.second+1;
                    }
                    if (newVal < amount && !visited[newVal]) {
                        visited[newVal] = true;
                        q.push({newVal, it.second + 1});
                    }
                }
            }
            return -1;
        }
    };