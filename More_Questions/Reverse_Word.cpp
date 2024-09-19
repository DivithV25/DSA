//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here(
        stringstream ss(str);
        vector<string> result;
        string word;
        while(getline(ss,word,'.')){                  //SPLITS THE STRING BASED ON "." AND STORES IT IN WORD
            result.push_back(word);
        }
        string ans="";
        int n=result.size();
        for(int i=0;i<n;i++){
            if(i!=(n-1)){
            ans=ans+result[n-i-1]+".";
            result.pop_back();
            }
            else{
                ans=ans+result[n-i-1];
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends