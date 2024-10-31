class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> answer(prices);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && prices[st.top()]>=prices[i]){
               int index=st.top();
               st.pop();
               answer[index]=answer[index]-prices[i]; 
            }
            st.push(i);
        }
        return answer;
    }
};