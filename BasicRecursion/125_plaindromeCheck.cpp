#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0; // TWO POINTERS APPROACH
        int end = s.size() - 1;
        while (start <= end)
        {
            if (!isalnum(s[start]))
            { // CHECKS FOR ALPHANUMERIC VALUE AND INCREMENT THE START POINTER
                start++;
                continue; // SKIP TO THE IMEDIATE ITERATION
            }
            if (!isalnum(s[end]))
            {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end]))
                return false;
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////

// RECURSIVE PALINDROME CHECK
bool checkit(int i, string &s)
{
    if (i >= s.size() / 2)                             //  M A D A M (n-i-1)
                                                       //  i--->    
        return true;                                   // if i crosses mid then return true else return false 
    if (s[0] != s[s.size() - i - 1])
    {
        return false;
    } 
    checkit(i + 1, s);                                // return chech it function by increasing by i value
}