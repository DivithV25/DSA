class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        vector<int> preFixGreat(values.size(), 0);
        int maxi = INT_MIN;
        for (int i = 0; i < values.size(); i++) {
            maxi = max(maxi, values[i] + i);
            preFixGreat[i] = maxi;
        }
        int maxEl = INT_MIN;
        for (int i = 1; i < values.size(); i++) {
            maxEl = max(maxEl, (preFixGreat[i - 1] + (values[i] - i)));
        }
        return maxEl;
    }
};