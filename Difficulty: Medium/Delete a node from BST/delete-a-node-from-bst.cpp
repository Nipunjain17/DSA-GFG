/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
    int minValue(Node* root){
        while(root->left != NULL){
            root = root->left;
        }
        
        return root->data;
    }
  public:
    Node* delNode(Node* root, int x) {
        if(root == NULL){
            return NULL;
        }
        
        if(root->data == x){
            // 0-child case
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            
            // 1-child case
            // for left child
            if(root->left != NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            
            // for right
            if(root->left == NULL && root->right != NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }
            
            // 2-child case
            if(root->left != NULL && root->right != NULL){
                int mini = minValue(root->right);
                root->data = mini;
                
                root->right = delNode(root->right,mini);
                return root;
            }
        }
        else if(x < root->data){
            root->left = delNode(root->left,x);
            return root;
        }
        else{
            root->right = delNode(root->right,x);
            return root;
        }
    }
};