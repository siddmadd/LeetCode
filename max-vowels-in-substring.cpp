class Solution {
public:
    int maxVowels(string s, int k) {
        int counter = 0;
        deque <char> word;
        for (int i = 0; i < k; ++i) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' 
            || s[i] == 'o' || s[i] == 'u') {
                counter++;
            }
            word.push_back(s[i]);
        }
        int max = counter;
        for (int i = k; i < s.length(); ++i) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' 
                || s[i] == 'o' || s[i] == 'u') {
                counter++;
            }
            if (word.front() == 'a' || word.front() == 'e' || word.front() == 'i' 
                || word.front() == 'o' || word.front() == 'u') {
                counter--;
            }
            word.push_back(s[i]);
            word.pop_front();
            if (counter > max) {
                max = counter;
            }
        }
        return max;
    }
};