class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec(n + 1);
        int counter;
        int part;
        for (int i = 0; i < n+1; ++i) {
            counter = 0;
            part = i;
            while (part != 0) {
                if (part & 0b1 == 0b1) {
                    ++counter;
                }
                part >>= 1;
            }
            vec[i] = counter;
        }
        return vec;
    }
};