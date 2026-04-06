/*Structure of the Node of the BST is as
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    void InorderTraversal(Node* root, vector<int>& inOrder){
        if(root == NULL){
            return;
        }
        
        InorderTraversal(root->left, inOrder);
        inOrder.push_back(root->data);
        InorderTraversal(root->right, inOrder);
        return;
    }
    
    Node* BuildBalanced(vector<int> inOrder, int left, int right){
        if(left > right){
            return NULL;
        }
        
        int mid = left + (right - left)/2;
        
        Node* root = new  Node(inOrder[mid]);
        root->left = BuildBalanced(inOrder, left, mid-1);
        root->right = BuildBalanced(inOrder, mid+1, right);
        return root;
    }
  public:
    Node* balanceBST(Node* root) {
        vector<int> inOrder;
        InorderTraversal(root, inOrder);
        
        return BuildBalanced(inOrder, 0, inOrder.size()-1);
    }
};