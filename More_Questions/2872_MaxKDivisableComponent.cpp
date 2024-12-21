class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges,
                                vector<int>& values, int k) {
        vector<vector<int>> adjacencyList(n);
        vector<int> nodeDegree(n);
        if (n < 2)
            return 1;
        for (auto& edge : edges) {
            adjacencyList[edge[0]].push_back(edge[1]);
            adjacencyList[edge[1]].push_back(edge[0]);
            nodeDegree[edge[0]]++;
            nodeDegree[edge[1]]++;
        }

        vector<long long> nodeValues(values.begin(), values.end());
        queue<int> leafNodes;
        for (int i = 0; i < n; i++)
            if (nodeDegree[i] == 1)
                leafNodes.push(i);

        int componentCount = 0;
        while (!leafNodes.empty()) {
            int currentNode = leafNodes.front();
            leafNodes.pop();
            nodeDegree[currentNode]--;
            long long remainder = 0;
            if (nodeValues[currentNode] % k == 0) {
                componentCount++;
            } else {
                remainder = nodeValues[currentNode];
            }
            for (int neighbor : adjacencyList[currentNode]) {
                if (nodeDegree[neighbor] == 0)
                    continue;
                nodeDegree[neighbor]--;
                nodeValues[neighbor] += remainder;
                if (nodeDegree[neighbor] == 1)
                    leafNodes.push(neighbor);
            }
        }
        return componentCount;
    }
};