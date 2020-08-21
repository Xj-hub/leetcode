/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
private: 
    vector<vector<int>> twoSum(vector<int>& nums, int l , int r, int target){
        vector<vector<int>> res;
        while(l < r){
            int temp = nums[l] + nums[r];
            if(temp == target){
                res.push_back({l, r});
                l++;
                r--;
                while (l < r && nums[l] == nums[l - 1]){
                    l++;
                }
            }
            else if(temp < target) l ++;
            else r--;
        }
        return res;
    }
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        while(i < n-2 && nums[i]<= 0){
            if(i != 0 && nums[i] == nums[i-1]) {
                i++;
                continue;
            }
            int target = nums[i];
            int lo = i+1, high = n -1;
            vector<vector<int>> candi = twoSum(nums, lo, high, -target);
            if(candi.size() != 0){
                for(vector<int> & each: candi){
                    res.push_back({nums[i], nums[each[0]], nums[each[1]]});
                }
            }
            i++;
        }
        return  res;
    }
};
// @lc code=end

