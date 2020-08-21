/*
 * @lc app=leetcode id=237 lang=cpp
 *
 * [237] Delete Node in a Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 */

// Since we do not have access to the node before the one we want to delete, 
// we cannot modify the next pointer of that node in any way. 
// Instead, we have to replace the value of the node we want to 
// delete with the value in the node after it, 
// and then delete the node after it.

// the node is not on the tail so it can swap with the next node;

using namespace std;
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
// @lc code=end

