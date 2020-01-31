#include <vector>
#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        /*vector<char> first, second;
        for (int i = 0; i < s.size(); ++i) 
            if (isalpha(s[i]) || isdigit(s[i]))
                first.push_back(tolower(s[i]));
        for (int i = s.size() - 1; i >= 0; --i)
            if (isalpha(s[i]) || isdigit(s[i]))
                second.push_back(tolower(s[i]));
        if (first == second)
            return true;
        return false;*/
        
        vector<char> palindrome;
        for (unsigned int i = 0; i < s.size(); ++i)
            if (isdigit(s[i]) || isalpha(s[i]))
                palindrome.push_back(tolower(s[i]));
        for (unsigned int i = 0; i < palindrome.size() / 2; ++i)
            if (palindrome[i] != palindrome[palindrome.size() - i - 1]) 
                return false;
        return true;
    }
};