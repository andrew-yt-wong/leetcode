class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> memo;
        for (int i = 0; i < coins.size() + 1; ++i) {
            vector<int> temp;
            memo.push_back(temp);
            memo[i].push_back(1);
            for (int j = 1; j < amount + 1; ++j)
                memo[i].push_back(0);
        }
        for (int i = 1; i < coins.size() + 1; ++i)
            for (int j = 1; j < amount + 1; ++j) {
                memo[i][j] = memo[i-1][j];
                if (j - coins[i - 1] > -1)
                    memo[i][j] = memo[i][j] + memo[i][j - coins[i-1]];
            }
        return memo[coins.size()][amount];
    }
};