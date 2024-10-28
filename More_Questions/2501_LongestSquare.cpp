class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        set<long long> St(nums.begin(), nums.end());

        set<long long> checked;

        int maxi = 0;
        for (auto it : St) {
            if (checked.count(it))
                continue;
            int count = 0;
            long long n = it;
            while (St.count(n)) {
                checked.insert(n);
                count++;
                n = n * n;
            }

            maxi = max(count, maxi);
        }
        return maxi > 1 ? maxi : -1;
    }
};