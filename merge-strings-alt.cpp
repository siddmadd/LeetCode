class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int index = 0;
        while(true) {
            if (word1.size() <= index) {
                merged += word2.substr(index);
                return merged;
            } else {
                merged += word1[index];
            }
            if (word2.size() <= index) {
                merged += word1.substr(index+1);
                return merged;
            } else {
                merged += word2[index];
            }
            ++index;            
        }
    }
};