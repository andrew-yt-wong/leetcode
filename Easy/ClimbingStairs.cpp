class Solution {
public:
    int climbStairs(int n) {
        std::vector<int> memo;
        memo.push_back(0);
        memo.push_back(1);
        memo.push_back(2);
        for (int i = 3; i < n + 1; ++i)
            memo.push_back(memo[i - 1] + memo[i - 2]);
        return memo[n];
    }
};