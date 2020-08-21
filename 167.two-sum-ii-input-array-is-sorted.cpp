/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        vector<int> res; 
        while(l < r){
            int temp = numbers[l] + numbers[r];
            if(temp> target){
                r--;
            }
            else if (temp < target){
                l ++;
            }
            else{
                
                return {l+1, r+1};
            }
        }
        return {-1,-1};
    }
};
// @lc code=end

