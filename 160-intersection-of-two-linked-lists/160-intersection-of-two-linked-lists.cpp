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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0;
        int len2 = 0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        if(temp1 == NULL || temp2 == NULL)
        {
            return NULL;
        }
        while(temp1 != temp2)
        {
            temp1 = temp1?temp1->next:headB;
            temp2 = temp2?temp2->next:headA;
        }
        return temp1;
    }
        
};
//solution is easy one
//claculate the lengh of two linked list
