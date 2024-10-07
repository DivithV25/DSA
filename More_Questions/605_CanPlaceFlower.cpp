class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0)
            return true;
        int n1 = flowerbed.size();
        for (int i = 0; i < n1; i++) {
            if (flowerbed[i] == 0) {
                bool prev_empty = (i == 0 || flowerbed[i - 1] == 0);
                bool next_empty = (i == n1 - 1 || flowerbed[i + 1] == 0);
                if (prev_empty && next_empty) {
                    flowerbed[i] = 1;
                    n--;
                }
                if (n == 0)
                    return true;
            }
        }
        return false;
    }
};