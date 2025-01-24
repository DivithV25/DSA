class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int numNodes = graph.size();
        vector<int> reversedAdjList[numNodes];
        vector<int> inDegree(numNodes, 0);

       
        for (int currentNode = 0; currentNode < numNodes; currentNode++) {
            for (int neighbor : graph[currentNode]) {
                reversedAdjList[neighbor].push_back(currentNode);
                inDegree[currentNode]++;
            }
        }

        queue<int> zeroInDegreeQueue;

        for (int node = 0; node < numNodes; node++) {
            if (inDegree[node] == 0) {
                zeroInDegreeQueue.push(node);
            }
        }

        vector<int> topologicalOrder;

        while (!zeroInDegreeQueue.empty()) {
            int currentNode = zeroInDegreeQueue.front();
            zeroInDegreeQueue.pop();
            topologicalOrder.push_back(currentNode);

            for (int neighbor : reversedAdjList[currentNode]) {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0) {
                    zeroInDegreeQueue.push(neighbor);
                }
            }
        }

        sort(topologicalOrder.begin(), topologicalOrder.end());
        return topologicalOrder;
    }
};