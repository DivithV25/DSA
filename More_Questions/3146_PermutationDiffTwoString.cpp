class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int differenceSum=0;
        for(int i=0;i<s.size();i++){
        int index=t.find(s[i]);
        differenceSum+=abs(i-index);
        }

        return differenceSum;
    }
};