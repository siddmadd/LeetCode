class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        if (nums.empty()) {
            return output;
        }
        int start = nums[0];
        int end = 0;
        string pusher;
        bool active;
        for(int i = 0; i < (nums.size() - 1); ++i) {
            if (nums[i] == (nums[i + 1] - 1)) {
                end = nums[i + 1];
                active = true;
                continue;
            } else {
                if (active == true) {
                    pusher = to_string(start) + "->" + to_string(end);
                } else {
                    pusher = to_string(start);
                }
                output.push_back(pusher);
                start = nums[i + 1];
                active = false;
            }
        }
        if (active == false) {
                output.push_back(to_string(start));
        } else {
                pusher = to_string(start) + "->" + to_string(end);
                output.push_back(pusher);
        }
        return output;
    }
};