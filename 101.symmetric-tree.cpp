/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    bool isMirror(TreeNode* left, TreeNode* right){
        if(!left&& !right) return true;
        if(!left || !right) return false;
        else{
            if(left->val == right->val 
            && isMirror(left->left, right->right)
            && isMirror(left->right, right->left))
                return true;
        }
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        if(!root->left && !root->right) return true;
        if(!root->left || !root->right) return false;
        else return isMirror(root->left, root->right);
    }
};
// @lc code=end

