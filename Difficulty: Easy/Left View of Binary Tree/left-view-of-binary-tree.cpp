/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  private:
    void leftV(Node* root, int level, vector<int>& arr){
        if(root == NULL) return;
        
        if(level == arr.size()){
            arr.push_back(root->data);
        }
        leftV(root->left,level+1,arr);
        leftV(root->right, level+1,arr);
        
        return;
    }
  public:
    vector<int> leftView(Node *root) {
        vector<int> arr;
        if(root == NULL) return arr;
        
        arr.push_back(root->data);
        leftV(root, 0,arr);
        
        return arr;
    }
};