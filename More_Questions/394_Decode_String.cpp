class Solution {
public:
    string decodeString(string s) {
        stack<int> numstack;
        stack<string> strstack;
        int num=0;
        for(char c : s){
            if(isdigit(c)){
                num=num*10+c-'0';
                continue;
            }
            if(c=='['){
                numstack.push(num);
                num=0;
                strstack.push("[");
                continue;
            }
            if(c!=']')
            {
                strstack.push(string(1,c));
                continue;
            }
            string temp;
            while(strstack.top()!="["){
                temp=strstack.top()+temp;
                strstack.pop();
            }
            strstack.pop();

            int count=numstack.top();
            numstack.pop();
            string decoded;
            for(int i=0;i<count;i++){
                decoded+=temp;
            }
            strstack.push(decoded);
        }

        string result="";
        while(!strstack.empty()){
            result=strstack.top()+result;
            strstack.pop(); 
        }
        return result;
    }
};