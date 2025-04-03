class Solution {
    public:
        int minFlips(int a, int b, int c) {
            if ((a | b) == c) {
                return 0;
            }
            int count = 0;
            for (int i = 0; i < 32; i++) {
                int x = 1 << i;
                int aVal = a & x, bVal = b & x, cVal = c & x, ORval = (aVal | bVal);
                if (ORval != cVal) {
    
                    if ((cVal | cVal) > 0) {
                        count++;
                    }
                    if ((cVal | cVal) == 0) {
                        if (((aVal | aVal) > 0) && ((bVal | bVal) > 0)) {
                            count += 2;
                        } else {
                            count++;
                        }
                    }
                }
            }
            return count;
        }
    };