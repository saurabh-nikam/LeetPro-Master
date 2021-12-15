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
    ListNode* insertionSortList(ListNode* head) {
        ListNode dummy(INT_MIN),*pre(&dummy),*next(nullptr);
        dummy.next = head;
        while(head){
            pre = &dummy;
            if(head && head->next && head->val > head->next->val){
                while(pre && pre->next && pre->next->val < head->next->val){
                    pre = pre->next;
                }
                next = pre -> next;
                pre -> next = head -> next;
                head -> next = head -> next -> next;
                pre -> next -> next = next;
            } else {
                head = head->next;
            }
        }
        return dummy.next;
    }
};