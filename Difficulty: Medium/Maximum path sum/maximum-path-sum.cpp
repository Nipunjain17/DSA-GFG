/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  private:
    int solve(Node* root, int& maxi){
        // base case 
        if(root == NULL) return 0;
        
        int left = solve(root->left, maxi);
        int right = solve(root->right, maxi);
        
        maxi = max(maxi, root->data+left+right);
        
        if(left >= right){
            int a = root->data + left;
            if(a < 0){
                a = 0;
            }
            return a;
        }
        else{
            int b = root->data + right;
            if(b < 0){
                b = 0;
            }
            return b;
        }
    }
  public:
    int findMaxSum(Node *root) {
        int maxi = INT_MIN;
        solve(root, maxi);
        
        return maxi;
    }
};