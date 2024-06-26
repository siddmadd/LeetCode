class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer;
        {
        vector<int> sid;
        vector<int> briz;
        answer.push_back(sid);
        answer.push_back(briz);
        }
        unordered_set<int> set1;
        unordered_set<int> set2;
        unordered_set<int> existing;
        for (int i = 0; i < nums1.size(); ++i) {
            set1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); ++i) {
            set2.insert(nums2[i]);
        }
        for (int i = 0; i < nums1.size(); ++i) {
            if (set2.find(nums1[i]) == set2.end() && existing.find(nums1[i]) == existing.end()) {
                answer[0].push_back(nums1[i]);
                existing.insert(nums1[i]);
            }
        }
        for (int i = 0; i < nums2.size(); ++i) {
            if (set1.find(nums2[i]) == set1.end() && existing.find(nums2[i]) == existing.end()){
                answer[1].push_back(nums2[i]);
                existing.insert(nums2[i]);
            }
        }
        return answer;
    }
};