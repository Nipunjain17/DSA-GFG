/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  private:
    int find(int element, vector<int> &inorder, int n){
        
        for(int i=0; i<n; i++){
            if(inorder[i] == element){
                return i;
            }
        }
        return -1;
    }
    Node* solve(vector<int> &inorder, vector<int> &preorder, int n, int& index, int indexStart, int indexEnd){
        if(index >= n || indexStart > indexEnd){
            return NULL;
        }
        
        int element = preorder[index++];
        Node* root = new Node(element);
        int pos = find(element, inorder, n);
        
        // for left 
        root->left =  solve(inorder, preorder, n, index, indexStart, pos-1);
        
        // for right 
        root->right =  solve(inorder, preorder, n, index, pos+1, indexEnd);
        
        return root;
    }
  public:
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        int n = preorder.size();
        int index = 0;
        Node* ans = solve(inorder, preorder, n, index, 0, n-1);
        
        return ans;
    }
};