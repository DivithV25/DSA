class Solution {
    public:
        int countPaths(int n, vector<vector<int>>& roads) {
                    vector<vector<pair<int, int>>> adjList(n);
            for (const auto& route : roads) {
                int start = route[0], end = route[1], travelTime = route[2];
                adjList[start].emplace_back(end, travelTime);
                adjList[end].emplace_back(start, travelTime);
            }
    
            vector<long long> minTime(n, LLONG_MAX);
            vector<int> pathCount(n, 0);
    
            minTime[0] = 0;
            pathCount[0] = 1;
    
            priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> minHeap;
            minHeap.emplace(0, 0);
    
            const int MODULO = 1e9 + 7;
    
            while (!minHeap.empty()) {
                auto [curTime, curNode] = minHeap.top();
                minHeap.pop();
    
                if (curTime > minTime[curNode]) continue;
    
                for (const auto& [nextNode, travelTime] : adjList[curNode]) {
                    if (minTime[curNode] + travelTime < minTime[nextNode]) {
                        minTime[nextNode] = minTime[curNode] + travelTime;
                        pathCount[nextNode] = pathCount[curNode];
                        minHeap.emplace(minTime[nextNode], nextNode);
                    } else if (minTime[curNode] + travelTime == minTime[nextNode]) {
                        pathCount[nextNode] = (pathCount[nextNode] + pathCount[curNode]) % MODULO;
                    }
                }
            }
    
            return pathCount[n - 1];
        }
    };