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
        if (headA == headB) return headA;

        ListNode *tempA = headA;
        ListNode *tempB = headB;
        int lenA=0;
        int lenB = 0;
        while (tempA->next != NULL) {
            tempA=tempA->next;
            lenA++;
        }
        while (tempB->next != NULL) {
            tempB=tempB->next;
            lenB++;
        }
        if (tempA != tempB)  return NULL;
        tempA = headA;
        tempB = headB;
        if (lenA > lenB) {
            // move A next till the lenA==lenB
            while (lenA > lenB) {
                tempA=tempA->next;
                lenA--;
            }
        } else if (lenB > lenA) {
            // move A next till the lenA==lenB
            while (lenB > lenA) {
                tempB=tempB->next;
                lenB--;
            }
        }

        while (tempA!=NULL) {
            if (tempA==tempB) return tempA;
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};