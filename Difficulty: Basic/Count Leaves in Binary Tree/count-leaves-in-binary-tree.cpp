/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  private:
    void InorderTraversal(Node* root, int &cnt){
        if(root == NULL) return;
        
        InorderTraversal(root->left,cnt);
        
        // Check the condition of leaf node
        if(root->left == NULL && root->right == NULL){
            cnt++;
        }
        
        InorderTraversal(root->right,cnt);
    }
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        int cnt = 0;
        InorderTraversal(root,cnt);
        
        return cnt;
    }
};