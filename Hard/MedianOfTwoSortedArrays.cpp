#include <algorithm>

bool compare(int i, int j) { return i < j; }

class Solution {
public:    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> allNums;
        for (unsigned int i = 0; i < nums1.size(); ++i) 
            allNums.push_back(nums1[i]);
        for (unsigned int i = 0; i < nums2.size(); ++i)
            allNums.push_back(nums2[i]);
        sort(allNums.begin(), allNums.end(), compare);
        
        if (allNums.size() % 2 == 1) return allNums[allNums.size() / 2];
        else return (allNums[allNums.size() / 2 - 1] + allNums[allNums.size() / 2]) / 2.0;
    }
};