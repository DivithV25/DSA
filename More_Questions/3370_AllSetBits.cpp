class Solution {
public:
    int smallestNumber(int n) {
        int bit = log2(n) + 1;
        int result = (1 << bit) - 1;
        return result;
    }
};