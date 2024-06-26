class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAlt = 0;
        int maxAlt = 0;
        for (int i = 0; i < gain.size(); ++i) {
            currentAlt += gain[i];
            if (currentAlt > maxAlt) {
                maxAlt = currentAlt;
            }
        }
        return maxAlt;
    }
};