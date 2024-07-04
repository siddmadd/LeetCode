class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> successPairs (spells.size());
        int works;
        for (int i = 0; i < spells.size(); ++i) {
            works = 0;
            long long sid = spells[i];
            int start = 0;
            int end = potions.size() - 1;
            while (start <= end) {
                int mid = (start + end) / 2;
                long long briz = sid * potions[mid];
                if(briz >= success) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            successPairs[i] = potions.size() - start;
        }
        return successPairs;
    }
};