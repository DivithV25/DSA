#include<bits/stdc++.h>
using namespace std;
bool mycomparator(pair<int,int> a,pair<int,int> b){
   if(a.first==b.first){
    return a.second>b.second;
   }
  return a.first>b.first;
}

int main(){
   vector<pair<int,int>> arr={{1,3},{4,3},{2,7}};
   sort(arr.begin(),arr.end(),mycomparator);
   for(auto i:arr){
    cout<< i.first<<":"<<i.second<<" ";
   }
}