class Solution {
public:
    bool isSubsequence(string s, string t) {
        const char* sPtr = s.c_str();
        const char* tPtr = t.c_str();
        while (*sPtr != '\0' && *tPtr != '\0') {
            if (*sPtr != *tPtr) {
                ++tPtr;
            } else {
                ++tPtr;
                ++sPtr;
            }
        }
        if (*sPtr == '\0') {
            return true;
        } else {
            return false;
        }
    }
};