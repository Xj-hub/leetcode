/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        int dp0 = 1;
        int dp1 = 2;
        for(int i = 2; i < n; i ++ ){
            int temp = dp1;
            dp1 = dp0 + dp1;
            dp0 = temp;
        }
        return dp1;
    }
};
// @lc code=end

