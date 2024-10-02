class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        for(char c:s){
            if(c=='*') {
            if(!st.empty()) st.pop();
        }
        else{
            st.push(c);
        }
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};