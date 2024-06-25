class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        map<int,int> dict;
        int n = nums.size() / 2;
        for (int i = 0; i < nums.size(); ++i) {
            if (dict.find(nums[i]) != dict.end()){
                ++dict[nums[i]];
                if (dict[nums[i]] > n) {
                    return nums[i];
                }
            } else {
                dict[nums[i]] = 1;
            }
        }
        return -1;
    }
};