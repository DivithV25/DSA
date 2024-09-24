//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> duplicates(vector<int> arr) {
        // code here
        vector<int> hash(arr.size(),0);
        vector<int> ans;
        for(int i=0;i<hash.size();i++){
          hash[arr[i]]=hash[arr[i]]+1;    
        }
        
        for(int i=0;i<hash.size();i++){
            if(hash[i]>1){
            ans.push_back(i);
            }
            
        }
        if(ans.empty()){
            return {-1};
            
        }
        else{
            return ans;
        }
    }
};


//{ Driver Code Starts.

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> ans = obj.duplicates(arr);
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}

