class Solution {
public:
    int digitsum(int num){
        if(num<=0) return 0;
        return num%10+digitsum(num/10);
    }
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(digitsum(i)%2==0) count++;
        }
        return count;
    }
};