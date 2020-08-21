/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        if(size == 0) return 0;
        int dp[size];

        dp[0] = nums[0];
        for(int i = 1; i < size; i++){
            if(dp[i-1] > 0) 
                dp[i] = dp[i-1] + nums[i];
            else
            {
                dp[i] = nums[i];
            }
            
        }
        int res = dp[0];
        for(int i = 0; i < size; i++){
            if(dp[i] >res){
                res = dp[i];
            }
        }
        return res;
    }
};
// @lc code=end

