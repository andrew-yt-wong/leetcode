class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (unsigned int i = 0; i < matrix.size(); ++i)
            for (unsigned int j = 0; j < matrix[i].size(); ++j)
                if (matrix[i][j] == target)
                    return true;
        return false;
    }
};