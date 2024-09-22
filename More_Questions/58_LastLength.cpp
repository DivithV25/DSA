class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> str;
        stringstream ss(s);
        string item;
        while(ss>>item){
      str.push_back(item);
        }
    string ans=str[str.size()-1];
    return ans.size();
    }
};