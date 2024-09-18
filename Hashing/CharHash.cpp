#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}
//map stores in order (best,average,worst->O(log(n)))
//unordered_map stores in order (best,average->O(1) worst->O(n))
//For both fetching and updating the value