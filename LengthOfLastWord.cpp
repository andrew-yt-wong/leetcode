#include <sstream>

class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp;
        stringstream ss(s);
        while (ss >> temp) {}
        return temp.size();
    }
};