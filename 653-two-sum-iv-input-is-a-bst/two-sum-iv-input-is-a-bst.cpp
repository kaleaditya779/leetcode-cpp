/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderSq;
    void inorderTraversal(TreeNode* ro) {
        if (!ro) return;
        inorderTraversal(ro->left);
        if (ro != nullptr) {
            inorderSq.push_back(ro->val);
            cout<<endl<<(ro->val);
        }
        inorderTraversal(ro->right);
    }

    bool findTarget(TreeNode* root, int k) {
        cout<<endl<<"size: "<<inorderSq.size()<<endl;
        inorderTraversal(root);
        cout<<endl<<"size: "<<inorderSq.size()<<endl;
        // cout<<"[";
        // for (int i: inorderSq) {
        //     cout<<i<<", ";
        // }
        // cout<<"]"<<endl;

        // for (int i=0; i<inorderSq.size(); i++){
        //     if (inorderSq[i] == nullptr) {
        //         inorderSq.erase(inorderSq.begin()+i);
        //     }
        // }

        // now i have array of elements.. that to sorted (due to inorder traversal of BST)
        int left=0;
        int right=inorderSq.size()-1;

        while (left<right) {
            if (inorderSq[left]+inorderSq[right] == k) return true;
            else if (inorderSq[left]+inorderSq[right] < k) left++;
            else if (inorderSq[left]+inorderSq[right] > k) right--;
        }
        return false;
    }
};