class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> result;
        sort(potions.begin(),potions.end());
        for (int i = 0; i < n; i++) {
            int count = 0;
            int low = 0;
            int high = m - 1;
            while (low <= high) {
                int mid = low+(high-low) / 2;
                 if ((long long)spells[i] * (long long)potions[mid] >= success) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            result.push_back(m-low);
        }
        return result;
    }
};