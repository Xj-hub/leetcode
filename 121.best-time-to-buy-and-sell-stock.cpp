/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp0 = 0, dp1 = INT_MIN;
        // dp value at day 0;
        int day = prices.size();
        for(int i = 0; i < day; ++i){
            dp0 = max(dp0, dp1 + prices[i]);
            dp1 = max(dp1, -prices[i]);
        }
        return dp0;
    }
};
// @lc code=end

