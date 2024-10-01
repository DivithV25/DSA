class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remCount(k,0);
        for(auto num : arr){
            int remain=(num%k+k)%k;                     //Handling negative while doing modulo
            remCount[remain]++;   
        }
        for(int i=1;i<=k/2;i++){
                int counter=k-i;
                if(remCount[counter]!=remCount[i]){
                    return false;
                }
        }
        return remCount[0]%2==0;
    }
};