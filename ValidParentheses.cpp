#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;
        for (unsigned int i = 0; i < s.size(); ++i)
        {
            if (chars.size() == 0)
                chars.push(s[i]);
            else if (s[i] == ')' && chars.top() == '(')
                chars.pop();
            else if (s[i] == ']' && chars.top() == '[')
                chars.pop();
            else if (s[i] == '}' && chars.top() == '{')
                chars.pop();
            else
                chars.push(s[i]);
        }
        if (chars.size() != 0) return false;
        return true;
    }
};