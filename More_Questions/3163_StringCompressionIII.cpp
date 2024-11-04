class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        int i=0;
        string result;
        while(i<n){
            int count=0;
            char ch=word[i];
            while(i<n && count<9 && ch==word[i]){
                count++;
                i++;
            }    
        result+=to_string(count)+ch;

        }
        return result;
    }
};