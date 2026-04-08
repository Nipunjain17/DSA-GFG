/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        Node* curr = root;
        
        Node* pred = NULL;
        Node* succ = NULL;
        while(curr != NULL && curr->data != key){
            if(key < curr->data){
                succ = curr;
                curr = curr->left;
            }
            else{
                pred = curr;
                curr = curr->right;
            }
        }
        
        if(curr == NULL){
            return {pred, succ};
        }
        
        Node* leftTree = curr->left;
        while(leftTree != NULL){
            pred = leftTree;
            leftTree = leftTree->right;
        }
        
        Node* rightTree = curr->right;
        while(rightTree != NULL){
            succ = rightTree;
            rightTree = rightTree->left;
        }
        
        return {pred, succ};
        
    }
};