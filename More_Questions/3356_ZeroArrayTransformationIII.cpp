class Solution {
    public:
        int sz;
        int qCnt;
    
        bool checkWithDifferenceArrayTeq(vector<int>& nums,
                                         vector<vector<int>>& queries, int k) {
            vector<int> diff(sz, 0);
    
            for (int i = 0; i <= k; i++) {
                int lo = queries[i][0];
                int hi = queries[i][1];
                int val = queries[i][2];
    
                diff[lo] += val;
                if (hi + 1 < sz)
                    diff[hi + 1] -= val;
            }
    
            int sum = 0;
    
            for (int i = 0; i < sz; i++) {
                sum += diff[i];
    
                diff[i] = sum;
    
                if (nums[i] - diff[i] > 0) {
                    return false;
                }
            }
    
            return true;
        }
        int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            sz = nums.size();
            qCnt = queries.size();
    
            auto isZero = [](int v) { return v == 0; };
    
            if (all_of(begin(nums), end(nums), isZero)) {
                return 0;
            }
    
            int lo = 0, hi = qCnt - 1, ans = -1;
            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;
    
                if (checkWithDifferenceArrayTeq(nums, queries, mid) == true) {
                    ans = mid + 1;
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
    
            return ans;
        }
    };