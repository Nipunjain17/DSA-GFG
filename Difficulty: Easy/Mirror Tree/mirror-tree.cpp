/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void mirror(Node* root) {
        if(root == NULL){
            return ;
        }
        
        // for 0-child case
        if(root->left == NULL && root->right == NULL){
            return ;
        }
        
        // for 1-child case
        //for left
        else if(root->left != NULL &&  root->right == NULL){
            root->right = root->left;
            root->left = NULL;
            mirror(root->right);
            return;
        }
        
        // for right
        else if(root->left == NULL && root->right != NULL){
            root->left = root->right;
            root->right = NULL;
            mirror(root->left);
            return;
        }
        
        // for 2-child
        else{
            Node* temp = root->right;
            root->right = root->left;
            root->left = temp;
            
            mirror(root->left);
            mirror(root->right);
            return;
        }
    }
};