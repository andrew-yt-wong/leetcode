#include <vector>

class Solution {
public:
    int helperFunc(string s, string prefix, int index) {
        for (unsigned int i = index; i < s.size(); ++i) {
            if (prefix.find(s[i]) != string::npos) break;
            prefix += s[i];
        }
        return prefix.size();
    }
    
    int lengthOfLongestSubstring(string s) {
        vector<int> sizes;
        int max = 0;
        for (unsigned int i = 0; i < s.size(); ++i)
            sizes.push_back(helperFunc(s, "", i));
        for (unsigned int i = 0; i < sizes.size(); ++i)
            if (sizes[i] > max) max = sizes[i];
        return max;
    }
};