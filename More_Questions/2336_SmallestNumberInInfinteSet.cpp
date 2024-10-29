class SmallestInfiniteSet {
public:
 set<int> st;
    SmallestInfiniteSet() {
        int n=1000;
        for(int i=1;i<=n;i++){
            st.emplace(i);
        }
        
    }
    
    int popSmallest() {
        const int res = *st.begin();
        st.erase(st.begin());
        return res;

    }
    
    void addBack(int num) {
        st.emplace(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */