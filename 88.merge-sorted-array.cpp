/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = nums1.size()-1;
        while(index >= 0 && n >0){
            if(m == 0 || nums2[n-1] >nums1[m-1]){
                nums1[index--] = nums2[--n];
            }
            else{
                nums1[index--] = nums1[--m];
            }
        }
    }
};
// @lc code=end

