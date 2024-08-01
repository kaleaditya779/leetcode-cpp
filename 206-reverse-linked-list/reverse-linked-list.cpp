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
    ListNode* reverseList(ListNode* head) {
        if (head==nullptr) return head;
        // WE need 3 pointers (including head) for reversing any singly ll.
        ListNode* prev=nullptr; 
        ListNode* curr=head;
        ListNode* next;

        while (curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        // prev will be the head of reversed ll
        return prev;
    }
};