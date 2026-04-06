/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
    bool solve(Node* p, Node* q){
        if(p == NULL && q == NULL) return true;
        
        if(p != NULL && q == NULL) return false;
        
        if(p == NULL && q != NULL) return false;
        
        bool leftCheck = solve(p->left, q->right);
        bool rightCheck = solve(p->right, q->left);
        
        bool check = p->data == q->data;
        
        if(leftCheck && rightCheck && check){
            return true;
        }
        else{
            return false;
        }
    }
  public:
    bool isSymmetric(Node* root) {
        return solve(root->left, root->right);
    }
};