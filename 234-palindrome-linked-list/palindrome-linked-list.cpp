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
    bool isPalindrome(ListNode* head) {
        /*
        1. iterate and find the length of ll.
        2. so find the middle index.
        3. again iterate till midindex and while iterating put the stuff into stack.
        4. start again after mid, if the stack top is same as current ll ele, then continue to pop the stack and compare, until the eles are not the same.
        5. if not same return false
        6. else when stack is empty and ll is at end, return true;

        */
        stack<int> theStack;
        int len=0;
        ListNode* temp = head;
        while (temp->next!=nullptr){
            temp=temp->next;
            len++;
        }
        len++; // contains size of ll
        // temp holds last node.
        if (len%2==0){
            int mid1=len/2;
            ListNode* t = head;
            for (int i=0; i<mid1; i++){
                theStack.push(t->val);
                t=t->next;
            }

            // t=t->next;
            for (int i=mid1; i<len; i++){
                if (t->val == theStack.top()){
                    theStack.pop();
                    t=t->next;
                }
                else return false;
            }
            

        } else {
            int mid2 = len/2;
            ListNode* t1 = head;
            for (int i=0; i<mid2; i++){
                theStack.push(t1->val);
                t1=t1->next;
            }

            t1=t1->next;
            // t1=t1->next;
            for (int i=mid2+1; i<len; i++){
                if (t1->val == theStack.top()){
                    theStack.pop();
                    t1=t1->next;
                }
                else return false;
            }
        }



        return true;
    }
};