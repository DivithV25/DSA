//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int mi,ma;
        sort(arr.begin(),arr.end());                            //SORT THE ARRAY
        int ans=arr[n-1]-arr[0];                                //INITALILZING THE ANS OF SOME EDGE CASE WHERE FIRST AND LAST ELEMENT ARE SAME
        int small=arr[0]+k;                                     // INCREASING THE FIRST ELEMETNT BY K TO DECREASE THE DIFFERENCE
        int large=arr[n-1]-k;                                   //  DECREASING THE LAST ELEMETNT BY K TO DECREASE THE DIFFERENCE
        for(int i=0;i<n-1;i++){                                 //WHEN WE KEEP i AS THE PIVOT ELEMENT WE CONSIDER THAT LEFT TO THE I WILL HANDLE (-K)
        mi=min(small,arr[i+1]-k);                               // RIGHT TO THE i WILL HANDLE (+K) SO AT THE EACH PIVOT POINT i'th ELEMENT CAN BECOME THE SAMLLEST 
        ma=max(large,arr[i]+k);                                 //AND (i+1)th CAN BECOME THE LARGEST 
        if(mi<0) continue;                                      //IF MI IS NEGATIVE CONTINUE  
        ans=min(ans,ma-mi);                                              
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends