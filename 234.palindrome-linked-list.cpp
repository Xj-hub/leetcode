/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    ListNode* Reverse(ListNode* head){
        ListNode* prev = NULL, *cur = head, *next;
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        head = prev;
        return head;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow =head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second_head = Reverse(head);
        
        // 1 2 3
        //   s f
        // 1 2 3 4
        //     s   f
        // ListNode* second_head = Reverse(slow);
        while(second_head){
            if(second_head->val != head->val)
                return false;
            second_head = second_head->next;
            head = head->next;
        }
        return true;
    }
};
// @lc code=end

