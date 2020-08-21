/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private: 
    TreeNode* sortedArrayToBST(vector<int>& num, int l, int r){
        if (l >r) return NULL;
        int mid = l + (r-l)/2;
        TreeNode* root = new TreeNode();
        root->val = num[mid];
        root->right = sortedArrayToBST(num, mid+1, r);
        root->left = sortedArrayToBST(num, l, mid-1);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int right = nums.size() -1 ;
        int left = 0;
        return sortedArrayToBST(nums, left, right);
    }
};
// @lc code=end

