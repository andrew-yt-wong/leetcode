class Solution {
public:
    // Testing recursive solution in 2^n time
//     int helper(vector<int>& nums, int index) {
//         if (index < 0) return 0;
//         int doRob = nums[index] + helper(nums, index - 2);
//         int dontRob = helper(nums, index - 1);
//         return max(doRob, dontRob);
//     }
    
//     int rob(vector<int>& nums) {
//         return helper(nums, nums.size() - 1);
//     }
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        vector<int> memo;
        memo.push_back(nums[0]);
        if (nums.size() >= 2)
            memo.push_back(max(nums[0], nums[1]));
        for (int i = 2; i < nums.size(); ++i)
            memo.push_back(max(nums[i] + memo[i - 2], memo[i - 1]));
        return memo[nums.size() - 1];
    }
};