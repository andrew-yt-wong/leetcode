class Solution {
public:
    int helper(vector<int>& digits, int index)
    {
        if (index == -1) return 1;
        if (digits[index] == 9)
        {
            digits[index] = 0;
            return helper(digits, index - 1);
        }
        else
            ++digits[index];
        return 0;
    }
    
    vector<int> plusOne(vector<int>& digits) {
        vector<int> added;
        if(helper(digits, digits.size() - 1))
            added.push_back(1);
        for(unsigned int i = 0; i < digits.size(); ++i)
            added.push_back(digits[i]);
        return added;
    }
};