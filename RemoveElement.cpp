class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        vector<int>::iterator it = find(nums.begin(), nums.end(), val);
        while (it != nums.end() && *it == val)
            nums.erase(it);
        return nums.size();
    }
};