class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];
        for (auto i : candies) {
            if (i > max) {
                max = i;
            }
        }
        int n = candies.size();

        vector<bool> result;
        for (int i = 0; i < n; i++) {
            if ((candies[i] + extraCandies) >= max) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};