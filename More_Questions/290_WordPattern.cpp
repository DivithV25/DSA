class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream ss(s);
        string item;
        vector<string> answer;
        while (ss >> item) {
            answer.push_back(item);
        }
        if (answer.size() != pattern.length()) {
            return false;
        }
        unordered_map<char, string> mp1;
        unordered_set<string> mp2;
        for (int i = 0; i < answer.size(); i++) {
            char c=pattern[i];
            string w = answer[i];
            if(mp1.count(c)){
                if(mp1[c]!=w){
                    return false;
                }
            }else{
                if(mp2.count(w)){
                    return false;
                }else{
                  mp1[c]=w;
                  mp2.insert(w);  
                }
            }
        }
        return true;
    }
}