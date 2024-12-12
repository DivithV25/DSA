class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());
        for (int i = 0; i < k; i++) {
            auto x = pq.top();
            pq.pop();
            auto y = sqrt(x);
            auto z = floor(y);
            pq.push(z);
        }
        long long sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};