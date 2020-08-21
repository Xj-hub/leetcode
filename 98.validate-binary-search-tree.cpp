/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    bool preorder(TreeNode* root, long long mine, long long maxe){
        if(!root) return true;
        if(root->val < maxe && root->val > mine
        && preorder(root->left, mine, root->val)
        && preorder(root->right, root->val, maxe))
            return true;
        return false;
    }
public:
    bool isValidBST(TreeNode* root) {
        return preorder(root, LLONG_MIN, LLONG_MAX);        
    }
};
// @lc code=end

