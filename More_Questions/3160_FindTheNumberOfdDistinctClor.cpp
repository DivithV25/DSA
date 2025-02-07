class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ballToColor;
        unordered_map<int, int> colorFrequency;
        unordered_set<int> uniqueColors;
        vector<int> results;

        for (auto& query : queries) {
            int ball = query[0], color = query[1];

            if (ballToColor.count(ball)) {

                if (--colorFrequency[ballToColor[ball]] == 0)
                    uniqueColors.erase(ballToColor[ball]);
            }

            ballToColor[ball] = color;
            colorFrequency[color]++;
            uniqueColors.insert(color);
            results.push_back(uniqueColors.size());
        }

        return results;
    }
};