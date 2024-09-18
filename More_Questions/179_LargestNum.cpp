class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for (auto i : nums) {                             //CONVERTING ALL THE NUMS TO STRING AND STORING IT IN STR
            str.push_back(to_string(i));
        }
        auto myoperator = [](string& s1, string& s2) {   //LABMDA COMPARATORS FUNCTION TO SORT WHICH DECIDES THE CORRECT POSITION OF THE ELEMENTS IN THE ARRAY
            return s1 + s2 > s2 + s1;
        };

        sort(str.begin(),str.end(),myoperator);            //SORT
        
        string ans="";
        for(auto i:str){
            ans=ans+i;
        }
        if (ans[0] == '0') {                             //EDGE CASE
            return "0";
        }
        return ans;
    }
};