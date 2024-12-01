class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        for (int& num : arr) {
            if (st.count(num * 2) || (num % 2 == 0 && st.count(num / 2))) {
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};