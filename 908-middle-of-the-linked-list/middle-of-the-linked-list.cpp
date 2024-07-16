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
    ListNode* middleNode(ListNode* head) {
        // We have to iterate through the ll, to know its length.
        int size = 1;
        
        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
            size++;
        }

        size = size/2;
        ListNode* middle = head;
        for (int i=0; i<size; i++) {
            middle = middle->next;
        }
        
        return middle;
    }
};