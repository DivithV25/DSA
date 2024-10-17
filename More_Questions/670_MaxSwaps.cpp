class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        int n = str.length();
        vector<int> maxRight(n);
        maxRight[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            int maxRightIdx = maxRight[i + 1];
            int maxRightEl = str[maxRightIdx];
            maxRight[i] = (str[i] > maxRightEl) ? i : maxRightIdx;
        }

        for (int i = 0; i < n; i++) {
            int RightMaxIn = maxRight[i];
            int RightMaxEl = str[RightMaxIn];
            if (str[i] < RightMaxEl) {
                swap(str[i], str[RightMaxIn]);
                return stoi(str);
            }
        }
        return num;
    }
};