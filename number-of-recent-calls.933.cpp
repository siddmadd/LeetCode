class RecentCounter {
public:
    queue<int> pings;
    RecentCounter() {
        pings = {};
    }
    
    int ping(int t) {
        pings.push(t);
        int lower = t-3000;
        while (!pings.empty()) {
            if (pings.front() < lower) {
                pings.pop();
            } else {
                break;
            }
        }
        return pings.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */