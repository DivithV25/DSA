//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        
            vector<int> ans(arr.size() + 1, 0);
        vector<int> result;
        
       
        for(int i = 0; i < arr.size(); i++) {
            ans[arr[i]]++;
        }
        
        
        for(int i = 1; i < ans.size(); i++) {
            if(ans[i] == 0) {
                result.push_back(i);  
            } else if(ans[i] == 2) {
                result.insert(result.begin(), i);  
            }
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends