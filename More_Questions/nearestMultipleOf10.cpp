//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int n=str.length();
        n--;
        if(str[n]<='5'){
            str[n]='0';
            return str;
        }
        str[n]='0';
        n--;
        while(n>=0 && str[n]=='9'){
            str[n]='0';
            n--;
        }
        if(n==-1) return '1'+str;
        str[n]+=1;
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends