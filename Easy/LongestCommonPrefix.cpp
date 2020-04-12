class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string prefix = "";
        for (unsigned int i = 0; i < strs[0].size(); ++i) {
            vector<char> letters;
            bool allSame = true;
            for (unsigned int j = 0; j < strs.size(); ++j)
                letters.push_back(strs[j][i]);
            for (unsigned int j = 0; j < letters.size() - 1; ++j)
                if (letters[j] != letters[j + 1]) 
                    allSame = false;
            if (allSame)
                prefix += letters[0];
            else
                break;
        }
        return prefix;
    }
};