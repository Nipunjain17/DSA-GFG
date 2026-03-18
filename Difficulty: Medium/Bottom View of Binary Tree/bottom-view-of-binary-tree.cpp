/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        vector<int> ans;
        
        if(root == NULL)  return ans;
        
        map<int, int> topNode;
        queue<pair<Node*, int>> q;
        
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*, int> temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int Hd = temp.second;
            
            topNode[Hd] = frontNode->data;
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left, Hd-1));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right, Hd+1));
            }
        }
        
        for(auto i : topNode){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};