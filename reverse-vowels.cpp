class Solution {
public:
    string reverseVowels(string s) {
        vector <pair<char,int>> vowel2Index;
        for (int i = 0; i < s.size(); ++ i) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U') {
                pair<char,int> v2I;
                v2I.first = s[i];
                v2I.second = i;
                vowel2Index.push_back(v2I);
            }
        }
        while (vowel2Index.size() > 1) {
            s[vowel2Index[0].second] = vowel2Index[vowel2Index.size() - 1].first;
            s[vowel2Index[vowel2Index.size() - 1].second] = vowel2Index[0].first;
            vowel2Index.erase(vowel2Index.begin());
            vowel2Index.pop_back();
        }
        return s;
    }
};