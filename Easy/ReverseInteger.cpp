#include <string>

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0)
        {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
        /*string num;
        bool isNeg = false;
        if (x < 0)
        {
            isNeg = true;
            x *= -1;
        }
        num = to_string(x);
        for (unsigned int i = 0; i < num.size() / 2; ++i)
        {
            swap(num[i], num[num.size() - i - 1]);
        }
        x = stoi(num);
        if (isNeg) x *= -1;
        return x;*/
    }
};