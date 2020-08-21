/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 0) return 0;
        int dp1 = nums[0], dp0 = 0; 
        for(int i = 1; i < size; i++){
            int temp = dp0;
            dp0 = max(dp1, dp0);
            dp1 = temp + nums[i];
        }
        return max(dp0, dp1);
    }
};
// @lc code=end

