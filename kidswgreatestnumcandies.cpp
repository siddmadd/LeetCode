class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> truths;
        for (int i = 0; i < candies.size(); ++i) {
            if (candies[i] + extraCandies >= max) {
                truths.push_back(true);
            }
            else {
                truths.push_back(false);
            }
        }
        return truths;
    }
};