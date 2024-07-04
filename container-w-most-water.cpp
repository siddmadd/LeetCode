class Solution {
public:
    int maxArea(vector<int>& height) {
        //two ptr approach
        int end = height.size() - 1;
        int start = 0;
        int maxArea = 0;
        int currArea = 0;
        while (start <= end) {
            currArea = abs(end-start) * min(height[start],height[end]);
            if (currArea > maxArea) {
                maxArea = currArea;
            }
            if (height[end] < height[start]) {
                end--;
            } else {
                start++;
            }
        }
        return maxArea;
    }
};