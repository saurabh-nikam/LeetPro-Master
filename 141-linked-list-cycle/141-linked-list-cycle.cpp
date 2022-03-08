/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return 0;
        ListNode* slow = head;
        ListNode* fast = head;
        while(head != NULL)
        {
            slow= slow->next;
            fast = fast->next;
            if(fast != NULL)
                fast=fast->next;
            else
                return false;
            if(slow == NULL || fast == NULL)
                return false;
            if(slow == fast)
                return true;
        }
        return false;
        
    }
};