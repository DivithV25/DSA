string convert(int n){
    string res="";
    while(n!=1){

        if(n%2==0){
            res+='0';
        }
        else{
            res+='1';
        }
        n=n/2;

    }
    reverse(res.begin(),res.end());
    return res;
}


//right shift new number formula
//n>>k = (n/2^k)


//when computer wants to store an negative number, it stores the 2's complement of the number


//left shift new number formula 
//n<<k = n*2^k


//NOT OPERATOR ~n
//if first we flip it if its negative then do 1's complimant or else we dont do one complement