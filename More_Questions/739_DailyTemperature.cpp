class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> result(n);
        for (int j = n - 1; j >= 0; j--) {
            while (!st.empty() && temperatures[st.top()] <= temperatures[j]) {
                st.pop();
            }
            if (st.empty()){
                result[j]=0;
            }else{
                result[j]=st.top()-j;
            }
            st.push(j);
        }
        return result;
    }
};