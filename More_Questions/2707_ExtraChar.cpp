class Solution {
public:
int solve(int i,string &S, unordered_set<string> &st,int &n,unordered_map<int,int> &mp){
    if(i>=n)
    return 0;
    if(mp.count(i))
    return mp[i];

    int result =1+solve(i+1,S,st,n,mp);

    for(int j=i;j<n;j++){
        string curr=S.substr(i,j-i+1);
        if(st.count(curr)){
         result=min(result,solve(j+1,S,st,n,mp));
         }
    }
    return mp[i]=result;
}
    int minExtraChar(string s, vector<string>& dictionary) {
     int n=s.size();
     unordered_map<int,int > mp;
     unordered_set<string> st(dictionary.begin(),dictionary.end());
     return solve(0,s,st,n,mp);  
    }
};