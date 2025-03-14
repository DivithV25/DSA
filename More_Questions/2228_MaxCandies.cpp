class Solution {
    public:
        bool canDist(vector<int>& candies, int mid, long long k) {
            long long count = 0;
            for (int i = 0; i < candies.size(); i++) {
                count += candies[i] / mid;
            }
            return count >= k;
        }
        int maximumCandies(vector<int>& candies, long long k) {
            long long sumC = 0;
            for (int num : candies) {
                sumC += num;
            }
            if (sumC < k)
                return 0;
    
            int low = 1, high = *max_element(candies.begin(), candies.end());
            int result = 0;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (canDist(candies, mid, k)) {
                    result = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return result;
        }
    };