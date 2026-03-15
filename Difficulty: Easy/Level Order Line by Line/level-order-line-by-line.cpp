/* A binary tree Node

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
  public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int size = q.size();
            
            while(size--){
                Node* temp = q.front();
                q.pop();
                
                level.push_back(temp->data);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                
            }
            ans.push_back(level);
        }
        return ans;
    }
};