#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4]={1,2,3,1};
    int hash[4]={0};
    for(int i=0;i<4;i++){
      hash[arr[i]]=hash[arr[i]]+1;
    }
    cout<<hash[1]<<endl;
}