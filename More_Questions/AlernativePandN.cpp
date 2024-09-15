//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
             vector<int> arr1,arr2;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                arr1.push_back(arr[i]);
            }
            else{
                arr2.push_back(arr[i]);
            }
        }
        
        int index1=0,index2=0;
        while(index1<arr1.size()&&index2<arr2.size()){
                cout<<arr1[index1]<<" ";
                index1++;
    
                cout<<arr2[index2]<<" ";
                index2++;
        }
        if(index1<arr1.size()){
            for(int i=index1;i<arr1.size();i++){
                cout<<arr1[i]<<" ";
            }
            
        }
        if(index2<arr2.size()){
            for(int j=index2;j<arr2.size();j++){
                cout<<arr2[j]<<" ";
            }
            
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends