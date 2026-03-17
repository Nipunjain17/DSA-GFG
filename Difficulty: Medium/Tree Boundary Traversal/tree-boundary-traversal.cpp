/*
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
  private:
    void LeftTraversal(Node* root, vector<int>& arr){
        if((root == NULL) || (root->left == NULL && root->right == NULL)){
            return ;
        }
        
        arr.push_back(root->data);
        if(root->left){
            LeftTraversal(root->left, arr);
        }
        else{
            LeftTraversal(root->right, arr);
        }
        return;
    }
    
    void leaf(Node* root, vector<int>&arr){
        if(root == NULL) return;
        
        if(root->left == NULL && root->right == NULL){
            arr.push_back(root->data);
            return;
        }
        
        leaf(root->left, arr);
        leaf(root->right, arr);
        return;
    }
    
    void rightTraversal(Node* root, vector<int>& arr){
        if((root == NULL) || (root->left == NULL && root->right == NULL)){
            return ;
        }
        
        if(root->right){
            rightTraversal(root->right,arr);
        }
        else{
            rightTraversal(root->left,arr);
        }
        
        arr.push_back(root->data);
        return;
    }
  public:
    vector<int> boundaryTraversal(Node *root) {
        vector<int> arr;
        
        if(root == NULL) return arr;
        // push the root data
        arr.push_back(root->data);
        
        // Traverse the left boundary of tree
        LeftTraversal(root->left, arr);
        
        // Traverse the leaf node of left subtree
        leaf(root->left, arr);
        // Traverse the leaf node of right subtree
        leaf(root->right, arr);
        
        // traverse the right boundary tree
        rightTraversal(root->right, arr);
        
        return arr;
    }
};