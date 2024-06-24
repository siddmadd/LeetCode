#include <vector>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        int c1 = 0;
        int c2 = 0;
        int k = m + n;
        for (int i = 0; i < k; ++i) {
            if (c1 == m){
                temp.push_back(nums2[c2]);
                ++c2;
                continue;
            }
            if (c2 == n){
                temp.push_back(nums1[c1]);
                ++c1;
                continue;
            }

            if (nums2[c2] > nums1[c1]){
                temp.push_back(nums1[c1]);
                ++c1;
            } else if (nums2[c2] < nums1[c1]){
                temp.push_back(nums2[c2]);
                ++c2;
            } else {
                temp.push_back(nums1[c1]);
                ++c1;
            }
        }
        for(int i = 0; i < temp.size();i++){
            nums1[i] = temp[i];
        }


        
    }
};