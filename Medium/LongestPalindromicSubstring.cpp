class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 0) return "";
        bool table[s.size()][s.size()];
        int max = 1;
        int start = 0;
        
        for (unsigned int i = 0; i < s.size(); ++i)
            for (unsigned int j = 0; j < s.size(); ++j)
                table[i][j] = false;
        
        for (unsigned int i = 0; i < s.size(); ++i)
            table[i][i] = true;
        
        for (unsigned int i = 0; i < s.size() - 1; ++i)
            if (s[i] == s[i + 1])
            {
                table[i][i + 1] =  true;
                start = i;
                max = 2;
            }
        
        for (unsigned int i = 3; i <= s.size(); ++i)
            for (unsigned int j = 0; j < s.size() - i + 1; ++j)
            {
                int k = j + i - 1;
                if (table[j + 1][k - 1] && s[j] == s[k])
                {
                    table[j][k] = true;
                    if (i > max)
                    {
                        start = j;
                        max = i;
                    }
                }
            }
        
        return s.substr(start, max);
    }
};