class Solution {
public:
    void help(vector<int>& nums, vector<vector<int>>& sets, vector<int>& curr, int index)
    {
        if (index == nums.size()) return;
        sets.push_back(curr);
        for(unsigned int i = index + 1; i < nums.size(); ++i)
        {
            curr.push_back(nums[i]);
            help(nums, sets, curr, i);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sets;
        vector<int> curr;
        help(nums, sets, curr, -1);
        return sets;
    }
};