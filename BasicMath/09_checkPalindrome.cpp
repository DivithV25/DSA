class Solution {
public:
    bool isPalindrome(int x) {
           string str1=to_string(x);
           return str1==string(str1.rbegin(),str1.rend());

    }
};