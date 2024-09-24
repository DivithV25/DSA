//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
       unordered_map<int,int> hash;
       if(arr.size()==1){
           return arr[0];
       }
        int n=arr.size()/2;
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]=hash[arr[i]]+1;
        }
      for(auto &it:hash){
          if(it.second>n){
              return it.first;
          }
      }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends