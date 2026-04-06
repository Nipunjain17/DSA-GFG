/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    Node* solve(Node* root, Node* n1, Node* n2){
        if(root == n1 || root == n2){
            return root;
        }
        
        if(root->data > n1->data && root->data > n2->data){
            return solve(root->left, n1, n2);
        }
        else if(root->data < n1->data && root->data < n2->data){
            return solve(root->right, n1, n2);
        }
        else{
            return root;
        }
        
    }
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) {
        Node* LCA = solve(root, n1, n2);
        return LCA;
    }
};