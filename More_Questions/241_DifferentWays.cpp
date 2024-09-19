class Solution {
public:
    vector<int> solve(string s){
        vector<int> result;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+' || s[i]=='*' || s[i]=='-'){
                vector<int> left_results=solve(s.substr(0,i));               //CAllS TO THE LEFT SIDE OF THE STRING 
                vector<int> right_results=solve(s.substr(i+1));              //CALLS TO THE RIGHT SIDE OF THE STRING

                for(int &x :left_results){
                    for(int &y :right_results){
                        if(s[i]=='+'){
                            result.push_back(x+y);                            //THIS IS WHERE ACTUALLY OPERATION TAKES PLACE
                        }
                        else if(s[i]=='-'){
                            result.push_back(x-y);

                        }
                        else{
                            result.push_back(x*y);
                        }
                    }
                }
            }
        }
        if(result.empty()){                                              //IF THE STRING HAS ONLY OPERATOR THEN THE NUMBER WILL BE ADDED THE ARRAY AND WILL BE ASSIGNED TO THE LEFT OR RIGHT 
            result.push_back(stoi(s));
        }
        return result;
    }


    vector<int> diffWaysToCompute(string expression) {
       return solve(expression);      
    }
};