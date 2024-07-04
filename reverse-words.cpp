class Solution {
public:
    string reverseWords(string s) {
        string word;
        stringstream a = stringstream(s);
        vector<string> words;
        while (a >> word) {
            words.push_back(word);
        }
        string jinWoo = words[words.size()-1];
        for (int i = words.size()-2; i >= 0; --i) {
            jinWoo += " " + words[i];
        }
        return jinWoo;
    }
};