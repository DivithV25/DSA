#include<bits/stdc++.h>
using namespace std;


int main(){
   vector<int> arr={1,4,3,2,7};
   auto mycomparator=[](int a,int b){
    return a>b;
   };
   sort(arr.begin(),arr.end(),mycomparator);
    

}