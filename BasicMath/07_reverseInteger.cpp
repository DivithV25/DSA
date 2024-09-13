class Solution {
public:
    int reverse(int x) {
        long y = abs(x);

        long last = 0;
        long long rev = 0;
        while (y > 0) {
            last = y % 10;
            y = y / 10;
            rev = (rev * 10) + last;
            if (rev > INT_MAX) {
                return 0;
            }
        }
        if (x > 0)
            return rev;
        else
            return -rev;
    }
};