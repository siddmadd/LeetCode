class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max = 0;
        for (int kCopy = 0; kCopy < k; ++kCopy) {
                max += nums[kCopy];
        }
        int windowIndex = k;
        int windowStart = 0;
        vector<double> maxes;
        maxes.push_back(max);
        while (windowIndex < nums.size()) {
            max = max - nums[windowStart] + nums[windowIndex];
            ++windowIndex;
            ++windowStart;
            maxes.push_back(max);
        }
        return (*max_element(maxes.begin(), maxes.end()) / k);
    }
};