class ProductOfNumbers {
    public:
    vector<int> prod;
        ProductOfNumbers() {
            
        }
        
        void add(int num) {
            prod.push_back(num);
        }
        
        int getProduct(int k) {
            int i=0;
            int n=prod.size();
            int result=1;
            while(k>0){
                int x=prod[n-i-1];
                i++;
                result*=x;
                k--;
            }
            return result;
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */