/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> inOrder(Node* root) {
        vector<int> arr;
        
        if(root == NULL) return arr;
        
        stack<Node*> st;
        Node* curr = root;
        
        while(curr != NULL || !st.empty()){
            while(curr != NULL){
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            
            arr.push_back(curr->data);
            curr = curr->right;
        }
        
        return arr;
    }
};