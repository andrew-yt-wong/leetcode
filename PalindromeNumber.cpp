#include <cmath>
#include <sstream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        int num = abs(x);
        string nums;
        stringstream s;
        s << x;
        s >> nums;
        for (unsigned int i = 0; i < nums.size() / 2; ++i)
            if (nums[i] != nums[nums.size() - i - 1]) return false;
        return true;
    }
};