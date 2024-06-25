class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string lastWorking;
        for (int i = 1; i <= str1.size();++i) {
            string divisor = str1.substr(0,i);

            if (str1.size() % i != 0 || str2.size() % i != 0) {
                continue;
            }

            int s1Pattern = str1.size() / i;
            int s2Pattern = str2.size() / i;
            string s1;
            string s2;
            for (int s = 0; s < s1Pattern; ++s) {
                s1 += divisor;
            }
            for (int s = 0; s < s2Pattern; ++s) {
                s2 += divisor;
            }
            if (s2 != str2 || s1 != str1) {
                continue;
            } else {
                lastWorking = divisor;
            }
        }
        return lastWorking;
    }
};