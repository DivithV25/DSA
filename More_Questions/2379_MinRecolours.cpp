class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int i = 0;
            int j = 0;
            int wCount = 0;
            int minWcount = INT_MAX;
            int n = blocks.length();
            while (j < n) {
                while (j - i + 1 <= k) {
                    if (blocks[j] == 'W') {
                        wCount++;
                    }
                    j++;
                }
                minWcount = min(minWcount, wCount);
                if (blocks[i] == 'W') {
                    wCount--;
                }
                i++;
            }
            return minWcount;
        }
    };