/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if (head==NULL) {
            return NULL;
        }


        Node* h = new Node(head->val);
        Node* iter = new Node(head->val); // iter to original ll
        iter = head;
        iter=iter->next;

        Node* pre = new Node(h->val); // pre to duplicate ll
        pre=h;
        while (iter!=NULL){
            Node* temp = new Node(iter->val);
            if (pre->next==NULL) pre->next=temp;
            pre=pre->next;
            iter=iter->next;
        }
        
        iter=head; // bringing the iter back to head
        int index=0;
        while (iter != NULL) {
            iter->val=index;
            iter=iter->next;
            index++;
        }
        
        unordered_map<int, int> indexRand;
        iter=head;
        for (int i=0; i<index; i++){
            if (iter->random == NULL) {
                indexRand[iter->val] = -1;
            }
            else {
                indexRand[iter->val] = iter->random->val;
            }
            iter=iter->next;
        }

        // for (auto i:indexRand) cout<<endl<<i.first<<" : "<<i.second;

        pre = h;
        Node* preIter = new Node(h->val);
        preIter = h;
        for (int i=0; i<index; i++){
            if (indexRand[i]==-1) {
                pre->random = NULL;
                pre=pre->next;
            } else {
                for (int j=0; j<indexRand[i]; j++){
                    preIter=preIter->next;
                }
                pre->random=preIter;
                preIter=h;
                pre=pre->next;
            }
        }

        return h;
    }
};