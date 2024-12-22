class Solution {
public:
    int n, sparseTable[50010][20], logValues[50010];

    int queryMaximum(int left, int right) {
        int k = logValues[right - left + 1];
        return max(sparseTable[left][k], sparseTable[right - (1 << k) + 1][k]);
    }
    vector<int> leftmostBuildingQueries(vector<int>& heights,
                                        vector<vector<int>>& queries) {
        int totalBuildings = heights.size();
        sparseTable[totalBuildings][0] = 2e9;
        logValues[0] = -1;
        for (int buildingIndex = 1; buildingIndex <= totalBuildings;
             buildingIndex++) {
            logValues[buildingIndex] = logValues[buildingIndex >> 1] + 1;
        }
        for (int buildingIndex = 0; buildingIndex < totalBuildings;
             buildingIndex++) {
            sparseTable[buildingIndex][0] = heights[buildingIndex];
        }
        for (int level = 1; level < 20; level++) {
            for (int start = 0; start + (1 << level) - 1 <= totalBuildings;
                 start++) {
                sparseTable[start][level] =
                    max(sparseTable[start][level - 1],
                        sparseTable[start + (1 << (level - 1))][level - 1]);
            }
        }

        int totalQueries = queries.size();
        vector<int> queryResults(totalQueries);
        for (int queryIndex = 0; queryIndex < totalQueries; queryIndex++) {
            int startBuilding = queries[queryIndex][0],
                endBuilding = queries[queryIndex][1];
            if (startBuilding > endBuilding)
                swap(startBuilding, endBuilding);

            if (startBuilding == endBuilding) {
                queryResults[queryIndex] = startBuilding;
                continue;
            }

            if (heights[endBuilding] > heights[startBuilding]) {
                queryResults[queryIndex] = endBuilding;
                continue;
            }

            int maxHeight = max(heights[endBuilding], heights[startBuilding]);
            int searchLow = endBuilding, searchHigh = totalBuildings, midPoint;
            while (searchLow < searchHigh) {
                midPoint = (searchLow + searchHigh) >> 1;
                if (queryMaximum(endBuilding, midPoint) > maxHeight) {
                    searchHigh = midPoint;
                } else {
                    searchLow = midPoint + 1;
                }
            }
            queryResults[queryIndex] =
                (searchLow == totalBuildings) ? -1 : searchLow;
        }
        return queryResults;
    }
};