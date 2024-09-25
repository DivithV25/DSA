class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string result="";
        stringstream ss(s);
        string word;
        while(ss>>word){
          ans.push_back(word);
        }
        for(int i=0;i<ans.size();i++){
            string str=ans[ans.size()-i-1];
            if(i!=ans.size()-1){
              result=result+str+" ";
            }
            else{
              result=result+str;

            }

        }
        return result;

    }
};