class Solution {
public:
    bool hasMatch(string s, string p) {
        int pivot=p.find("*");
        string first=p.substr(0,pivot);
        string second=p.substr(pivot+1);

        int i=s.find(first);
        int j=s.rfind(second);

        return i!=-1 && j!=-1 && i+first.size()<=j;

    }
};