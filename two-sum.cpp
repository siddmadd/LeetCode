class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> dict;
        vector<int> ret;
        for (int i = 0; i < nums.size(); ++i) {
            int desired = target - nums[i];
            if (dict.find(nums[i]) == dict.end()) {
                dict[nums[i]] = i;
            }
            if (dict.find(desired) == dict.end()){
                continue;
            } else {
                if (dict[desired] == i){
                    continue;
                } else {
                    ret.push_back(dict[desired]);
                    ret.push_back(i);
                    break;
                }
                
            }
        }
        return ret;
    }
};