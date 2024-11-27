class Solution {
public:
    unordered_map<int, vector<int>> adj;
    int bfs(int n) {
        queue<int> que;
        que.push(0);
        vector<bool> visited(n, false);
        visited[0] = true;

        int level = 0;
        while (!que.empty()) {
            int size = que.size();
            while (size--) {
                int node = que.front();
                que.pop();
                if (node == n - 1) {
                    return level;
                }
                for (int& near : adj[node]) {
                    if (!visited[near]) {
                        que.push(near);
                        visited[near] = true;
                    }
                }
            }
            level++;
        }
        return -1;
    }
    vector<int> shortestDistanceAfterQueries(int n,
                                             vector<vector<int>>& queries) {
        for (int i = 0; i <= n - 2; i++) {
            adj[i].push_back(i + 1);
        }

        int q = queries.size();
        vector<int> result;

        for (auto& query : queries) {
            int u = query[0];
            int v = query[1];
            adj[u].push_back(v);
            int d = bfs(n);
            result.push_back(d);
        }
        return result;
    }
};