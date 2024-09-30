class CustomStack {
public:
    int M;
    int count;
    vector<int> vec;

    CustomStack(int maxSize) {
        M = maxSize;
        count = 0;
    }

    void push(int x) {
        if (count < M) {
            count++;
            vec.push_back(x);
        }
    }

    int pop() {
        if (count > 0) {
            int x = vec.back();
            vec.pop_back();
            count--;
            return x;
        } else
            return -1;
    }

    void increment(int k, int val) {
        for (int i = 0; i < min(k, count); i++) {
            vec[i] = vec[i] + val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */