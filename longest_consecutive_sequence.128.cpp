//Nums is unsorted

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) {
            return nums.size();
        }
        
        set<int> set;
        for(int num : nums){
            set.insert(num);
        }
        
        int len = 1;
        int curr = 1;
        int prev = *set.begin();
        auto start = set.begin();
        ++start;
        auto end = set.end();
        cout << nums[0];
        while (start != end) {
            if (*start == (prev + 1)) {
                ++curr;
            } else {
                if (curr > len) { len = curr; }
                curr = 1;
            }
            prev = *start;
            ++start;
        }
        if (curr > len) {len = curr;}
        return len;
    }
};