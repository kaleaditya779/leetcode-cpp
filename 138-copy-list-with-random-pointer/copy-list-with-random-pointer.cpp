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
        unordered_map<Node*, Node*> uMap;
        // Basically what i what to do is that store original ll as key and duplicate as value..
        Node* iter = head;
        while (iter!=NULL){
            Node* temp = new Node(iter->val);
            uMap[iter] = temp;
            iter=iter->next;
        }

        // now what is remaining is to give next and random links to duplicate ll.
        iter=head;
        Node* temp = uMap[iter];
        while (iter!=NULL){
            uMap[iter]->next = uMap[iter->next];
            uMap[iter]->random = uMap[iter->random];
            // understand above 2 lines and that's all !!!!!
            iter=iter->next;
        }
        iter=head;
        return uMap[iter];
    }
};