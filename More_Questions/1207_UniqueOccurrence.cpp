class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        set<int> st;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            st.insert(i.second);
        }
        return st.size()==mp.size();
        
    }
};