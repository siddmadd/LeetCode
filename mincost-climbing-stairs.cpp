class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if (cost.size() == 2) {
            return min(cost[0],cost[1]);
        }
        vector<int> currCost;
        currCost.push_back(cost[0]);
        currCost.push_back(cost[1]);
        for (int i = 2; i < cost.size(); ++i) {
            currCost.push_back(cost[i] + min(currCost[i - 2], currCost[i - 1]));
        }
        return min(currCost[cost.size() - 1], currCost[cost.size() - 2]);
    }
};