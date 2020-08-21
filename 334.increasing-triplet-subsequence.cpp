/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX;
        int size = nums.size();
        for(int i = 0; i < size; ++i){
            if(nums[i] > min2){
                return true;
            }
            if(nums[i] <= min1){
                min1 = nums[i];
            }
            else if(nums[i] <= min2){
                min2 = nums[i];
            }
        }
        return false;
    }
};
// @lc code=end

