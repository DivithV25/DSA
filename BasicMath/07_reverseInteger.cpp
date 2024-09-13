class Solution {
public:
    int reverse(int x) {
        long y = abs(x);//positive value into y

        long last = 0;
        long long rev = 0; //reversenumber intialization
        while (y > 0) {
            last = y % 10;  //extract last digit
            y = y / 10;
            rev = (rev * 10) + last;
            if (rev > INT_MAX) { //if greater than INT_MAx return 0
                return 0;
            }
        }
        if (x > 0)
            return rev;
        else
            return -rev;
    }
};