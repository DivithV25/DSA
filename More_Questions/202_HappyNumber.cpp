class Solution {
public:
    int getNext(int num) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> seenNums;
        while (n != 1 && seenNums.find(n) == seenNums.end()) {
            seenNums.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};