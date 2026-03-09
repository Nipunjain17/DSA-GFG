/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  private:
    bool BST(Node* root, int min, int max){
        if(root == NULL) return true;
        
        if(root->data > min && root->data < max){
            bool left = BST(root->left,min,root->data);
            bool right = BST(root->right,root->data,max);
            
            if(left && right) return true;
        }
        return false;
    }
  public:
    bool isBST(Node* root) {
        return BST(root,INT_MIN,INT_MAX);
    }
};