#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {  
        int start = 0;                       //TWO POINTERS APPROACH
        int end = s.size() - 1;                      
        while (start <= end) { 
            if (!isalnum(s[start])) {        //CHECKS FOR ALPHANUMERIC VALUE AND INCREMENT THE START POINTER  
                start++;
                continue;                    //SKIP TO THE IMEDIATE ITERATION 
            }
            if (!isalnum(s[end])) {             
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
                return false;
            else {
                start++;
                end--;
            }
        }
        return true;
    }
};