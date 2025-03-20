//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        // Your code here
        int x=(1<<k);
        if((n&x)!=0) return true;
        return false;
    }
};



class Solution {
  public:
    bool checkKthBit(int n, int k) {
        // Your code here
        int x=(n>>k);
        if((x&1)==1) return true;
        return false;
    }
};


