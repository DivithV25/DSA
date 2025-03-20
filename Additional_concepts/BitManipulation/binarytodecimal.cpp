int convert2decimal(string s){
    int n=s.length();
    int num=0;
    int p=1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            num+=p;
        }
        p*=2;
    }
    return num;
}