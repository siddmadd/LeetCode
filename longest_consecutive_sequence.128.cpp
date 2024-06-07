//Nums is unsorted

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) {
            return nums.size();
        }
        sort(nums.begin(), nums.end());
        int len = 1;
        int curr = 1;
        int prev = nums[0];
        int start = 1;
        int end = nums.size() - 1;
        while (start <= end) {
            if (nums[start] == (prev + 1)) {
                ++curr;
            } else if (nums[start] == prev) {

            } else {
                if (curr > len) { len = curr; }
                curr = 1;
            }
            prev = nums[start];
            ++start;
        }
        if (curr > len) {len = curr;}
        return len;
    }
};