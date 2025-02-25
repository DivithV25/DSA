class Solution {
    public:
        int MOD = 1e9 + 7;
        int numOfSubarrays(vector<int>& arr) {
            int n = arr.size();
            vector<int> prefix(n, 0);
            prefix[0] = arr[0];
            for (int i = 1; i < arr.size(); i++) {
                prefix[i] = prefix[i - 1] + arr[i];
            }
    
            int count = 0;
            int prevOddSum = 0;
            int prevEvenSum = 1;
            for (int i = 0; i < arr.size(); i++) {
                if (prefix[i] % 2 == 0) {
                    count = (count + prevOddSum) % MOD;
                    prevEvenSum++;
                } else {
                    count = (count + prevEvenSum) % MOD;
                    prevOddSum++;
                }
            }
            return count;
        }
    };