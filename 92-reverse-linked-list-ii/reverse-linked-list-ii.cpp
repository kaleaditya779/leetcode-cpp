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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        /*
        3 pointers: prev, curr, forw.
        1) prev->curr->forw (initial sequence) 
        2) initially curr will be exactly at left position.
        3) to handle left=1, we use dummy->head. (so prev can point to dummy)
        4) then adjust prev at its original position.
        5) i will set curr to next of prev. (exactly at left position)
        6) IMP: reversing.. iterations i = [0, right-left) times
           forw=curr->next;
           curr->next=forw->next;
           forw->next=prev->next;
           prev->next=forw;
        (Take an example to visualize and understand the logic)
        7) finally return the head.. (which is dummy->next)..

        (VISUALIZE BY TAKING EX, THEN WILL UNDERSTAND COMPLETELY)
        */
        // if (head->next==nullptr) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* prev = dummy;

        // brought prev at its required position
        for (int i=0; i<left-1; i++){
            prev=prev->next;
        }

        ListNode* curr = prev->next;

        for (int i=0; i<right-left; i++){
            ListNode* forw = curr->next;
            curr->next=forw->next;
            forw->next=prev->next;
            prev->next=forw;
        }
        head=dummy->next;
        return head;

    }
};