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


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> comp;
        for (int i=0; i<lists.size(); i++){

            while (lists[i]!=nullptr) {
                comp.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(comp.begin(), comp.end());
        // for (int i:comp) cout<<endl<<i;
        ListNode* head = new ListNode();
        ListNode* tail = new ListNode();
        // if (head==nullptr) cout<<"Yep";
        for (int i=0; i<comp.size(); i++){
            ListNode* temp = new ListNode();
            temp->val = comp[i];
            if (head->next==nullptr) {
                head->next=temp;
                tail=temp;
            } else {
                tail->next = temp;
                tail=tail->next;
            }
            
        }
        return head->next;
    }
};