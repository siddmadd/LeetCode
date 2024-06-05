class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sidS;
        unordered_map<char,int> sidT;
        if (s.length() != t.length()){return false;}
        for (int i = 0; i < s.length(); ++i) {
            sidS[s[i]]++;
            sidT[t[i]]++;
        }
        return (sidS == sidT);
    }
};