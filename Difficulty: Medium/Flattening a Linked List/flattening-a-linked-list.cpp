/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  private:
    Node *Merging(Node* left, Node* right){
        if(left == NULL) return right;
        if(right == NULL) return left;
        
        Node* ans = new Node(-1);
        Node* ansNode = ans;
        
        while(left != NULL && right != NULL){
            if(left->data < right->data){
                ansNode->bottom = left;
                left = left->bottom;
            }
            else{
                ansNode->bottom = right;
                right = right->bottom;
            }
            
            ansNode = ansNode->bottom;
            ansNode->next = NULL;
        }
        
        while(left != NULL){
            ansNode->bottom = left;
            left = left->bottom;
            ansNode = ansNode->bottom;
            ansNode->next = NULL;
        }
        
        while(right != NULL){
            ansNode->bottom = right;
            right = right->bottom;
            ansNode = ansNode->bottom;
            ans->next = NULL;
        }
        
        return ans->bottom;
    }
  public:
    Node *flatten(Node *root) {
        if(root == NULL || root->next == NULL) return root;
        
        root->next = flatten(root->next);
        
        root = Merging(root, root->next);
        
        return root;
    }
};