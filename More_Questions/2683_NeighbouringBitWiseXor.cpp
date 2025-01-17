class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int sum = 0;
        for (int & i : derived) {
            sum ^= i;
        }
        return sum == 0;
    }
};