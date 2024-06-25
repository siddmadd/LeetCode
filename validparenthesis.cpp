class Solution {
public:
    bool isValid(string s) {
        stack<char> stax;
        for(int i = 0; i < s.size(); ++i) {
            char ch = s[i];
            if ((ch == '[') || (ch == '(') || (ch == '{')) {
                stax.push(ch);
            } else {
                if ((ch == ']') || (ch == ')') || (ch == '}')) {
                    if (stax.empty()){
                        return false;
                    }
                }
                if (ch == ']') {
                    if (stax.top() == '[') {
                        stax.pop();
                    } else {return false;}
                } else if (ch == '}') {
                    if (stax.top() == '{') {
                        stax.pop();
                    } else {return false;}
                } else if (ch == ')') {
                    if (stax.top() == '(') {
                        stax.pop();
                    } else {return false;}
                }
            }
        }
        return stax.empty();
    }
};