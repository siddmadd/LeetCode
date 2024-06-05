// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
// and removing all non-alphanumeric characters,
// it reads the same forward and backward. 
// Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.


class Solution {
public:
    bool isPalindrome(string s) {

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int start = 0;
        int end = s.size() - 1;

        while (start <= end) {
            while (!isalnum(s[start]) && start <= end) {++start;}
            while (!isalnum(s[end]) && start <= end) {--end;}
            if(start > end) {return true;}
            if (s[start] != s[end]) {
                return false;
            } else {
                ++start;
                --end;
            }
        }
        return true;
    }
};