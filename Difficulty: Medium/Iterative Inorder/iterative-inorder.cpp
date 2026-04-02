// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
  // Morris Inorder Traversal
    vector<int> inOrder(Node* root) {
        vector<int> visited;
        
        Node* curr = root;
        
        while(curr != NULL){
            if(curr->left == NULL){
                visited.push_back(curr->data);
                curr = curr->right;
            }
            
            else{
                Node* prev = curr->left;
                
                while(prev->right != NULL && prev->right != curr){
                    prev = prev->right;
                }
                if(prev->right == NULL){
                    prev->right = curr;
                    curr = curr->left;
                }
                else{
                    prev->right == NULL;
                    visited.push_back(curr->data);
                    curr = curr->right;
                }
            }
        }
        return visited;
        
    }
};