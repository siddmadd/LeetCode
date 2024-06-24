class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        int start = 0;
        int end = number.size() - 1;
        while (start < end) {
            if (number[start] == number[end]) {
                ++start;
                --end;
                continue;
            } else { 
                return false;
            }
        }
        return true;
    }
};