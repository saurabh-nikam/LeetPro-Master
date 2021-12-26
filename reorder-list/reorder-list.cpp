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
    ListNode* reverse(ListNode* head){
        ListNode *prev = nullptr,*temp;
        while(head!=nullptr){
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode *slow = head,*fast = head,*prev = nullptr;
        while(fast and fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *head1 = head,*head2;
        if(fast){
            head2 = slow->next;
            slow->next = nullptr;
        }
        else{
            head2 = slow;
            prev->next = nullptr;
        }
        // reversing the other half of the list
        head2 = reverse(head2);        
        int turn = 1;
        ListNode *ans = new ListNode(0);
        ListNode* curr = ans;
        while(head1 or head2){
            if(turn){
                curr->next = head1;
                head1 = head1->next;
            }
            else{
                curr->next = head2;
                head2 = head2->next;
            }
            turn^=1;
            curr = curr->next;
        }
        if(head1)
            curr->next = head1;
    }
};
// recuuserive call kaeng eapne ka callkaregen 
//base case ko thik se handle karenge