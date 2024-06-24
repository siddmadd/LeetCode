class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int temp;
        for (int i = 0; i < nums.size(); ++i) {
            if (val != nums[i]) {
                temp = nums[k];
                nums[k] = nums[i];
                nums[i] = temp;
                ++k;
            }
        }
        return k;
    }
};