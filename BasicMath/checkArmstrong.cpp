#include<bits/stdc++.h>
int countme(int x){
	int count=0;
	while(x>0){
        count++;
		x=x/10;
	}
	return count;
}

int sumk(int k ,int y){
     int sum = 0;
    while (y > 0) {
        int last = y % 10;
        sum += pow(last, k);  // Raise the digit to the power of k
        y = y / 10;
    }
    return sum;
}

bool checkArmstrong(int n){
	//Write your code here
  int number = n;
    int k = countme(n);
    int sumOfPowers = sumk(k, n);
    
    return number == sumOfPowers;
}

