class Solution {
public:
    void permuteHelper(vector<int>& nums, int index, vector<vector<int>>& perms) {
        if (index == nums.size() - 1)
            perms.push_back(nums);
        else {
            for (unsigned int i = index; i < nums.size(); ++i) {
                swap(nums[i], nums[index]);
                permuteHelper(nums, index + 1, perms);
                swap(nums[i], nums[index]);
            }
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> perms;
        permuteHelper(nums, 0, perms);
        return perms;
    }
};