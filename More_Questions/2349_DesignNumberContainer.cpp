class NumberContainers {
    map<int, int> mp;
    map<int, set<int>> mp2;

public:
    NumberContainers() {}

    void change(int index, int number) {
        if(mp.count(index)){
            int preNum = mp[index];
            mp2[preNum].erase(index);
            if(mp2[preNum].empty()){
                mp2.erase(preNum);
            }
        }
        
        mp[index] = number;
        mp2[number].insert(index);
    }

    int find(int number) {
        if (mp2.find(number) != mp2.end()) {
            return *mp2[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */