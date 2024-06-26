class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //key,count
        unordered_map <int,int> occCount;
        unordered_set <int> counts;
        for (int i = 0; i < arr.size(); ++i) {
            occCount[arr[i]]++;
        }
        for (auto it: occCount) {
            if (counts.find(it.second) != counts.end()) {
                return false;
            }
            counts.insert(it.second);
        }
        return true;
    }
};