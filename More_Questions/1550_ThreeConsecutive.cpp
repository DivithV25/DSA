class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            while (i < arr.size() && arr[i] % 2 != 0) {
                count++;
                i++;
            }
         
            if (count >= 3) {
                return true;
            }
            count = 0;
        }
        return false;
    }
};
