//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  int divided(int num,int k){
      int count=0;
      while(num>k){
          num=num-k;
          count++;
      }
      count++;
      return count;
  }
    int totalCount(int k, vector<int>& arr) {
        // code here
        int total=0;
        for(auto i:arr){
            int sum=divided(i,k);
            total=total+sum;
        }
        
        
        return total;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends