class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.size() == 1) {return 0;}
        int right = nums.size() - 1;
        int left = 0;
        int leftsum = 0;
        int rightsum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            rightsum += nums[i];
        }
        rightsum -= nums[0];
        if (rightsum == leftsum) {return 0;}
        for (int i = 1; i < nums.size(); ++i) {
            leftsum += nums[i-1];
            rightsum -= nums[i];
            if (rightsum == leftsum) {return i;}
        }
        return -1;
    }
};