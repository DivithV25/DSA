//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(vector<int> &arr)
    {
        // Your code here
        if (!arr[0])                                    //IF THE FIRST ELEMENT IS 0 THEN RETURN -1
            return -1;
        int ans = 1, mx = 0, jump = arr[0];             //ANS=1(THERE IS ATLEAST ONE JUMP)
        for (int i = 1; i < arr.size(); i++)            //STARTING FORM 1 BECAUSE 0 IS ALREADY ADDRESSED
        {
            mx--;                                       //MX-- BECAUSE AS WE MOVE FORWARD WE DECREASE THE VALUE AS PER INDEX(SOME CASES MIGHT LEAD TO NOT REACHING THE END)   
            jump--;                                     //DECREASING THE JUMP AS WE MOVE FORWARD
            mx = max(mx, arr[i]);                                       
            if (!jump && i != arr.size() - 1)           //LOADING JUMP WITH MAX IF JUMP IS FINISHED
            {
                if (mx <= 0)
                    return -1;
                jump = mx;
                mx = 0;
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number)
        {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends