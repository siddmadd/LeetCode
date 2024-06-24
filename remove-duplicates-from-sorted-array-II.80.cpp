class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> dic;
        int loc_of_ins = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (dic.find(nums[i]) == dic.end()) {
                nums[loc_of_ins] = nums[i];
                ++loc_of_ins;
                dic[nums[i]] = 0;
            } else {
                if (dic[nums[i]] == 0){
                    nums[loc_of_ins] = nums[i];
                    ++loc_of_ins;
                    ++dic[nums[i]];
                } else {
                    continue;
                }
            }

        }
        return loc_of_ins;
    }
};