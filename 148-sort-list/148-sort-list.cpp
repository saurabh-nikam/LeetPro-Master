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
public:
     ListNode *merge(ListNode *l, ListNode *r) {
    ListNode *dummy = new ListNode(0), *node;
    node = dummy;
    while (l && r) {
        if (l->val < r->val) {
            node->next = l;
            l = l->next;
        } else {
            node->next = r;
            r = r->next;
        }
        node = node->next;
    }
    if (l)
        node->next = l;
    else 
        node->next = r;
    return dummy->next;
}
    
     ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        //divide the list into two equal parts
    //call merge two sorted list function
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode*two = slow->next;
        slow->next = nullptr;
        ListNode* ans = merge(sortList(head),sortList(two));
        return ans;
        
    }
};
   

//sorting the list using the merge sort
//its similliar to sorting k sorted list
//divide the list in smaller part and megrge them to form one 