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
  public:
    Node* createMapping(Node* root, int target, map<Node*, Node*>&nodeToParent){
        Node* ans = NULL;
        
        queue<Node*> q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            
            if(front->data == target){
                ans = front;
            }
            
            if(front->left){
                q.push(front->left);
                nodeToParent[front->left] = front;
            }
            
            if(front->right){
                q.push(front->right);
                nodeToParent[front->right] = front;
            }
        }
        return ans;
    }
    int burnTree(Node* root, map<Node*, Node*>&nodeToParent){
        
        int timer = 0;
        map<Node*, bool> visited;
        queue<Node*> q;
        
        visited[root] = true;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            bool flag = false;
            for(int i=0; i<size; i++){
                Node* front = q.front();
                q.pop();
                
                if(front->left && !visited[front->left]){
                    q.push(front->left);
                    visited[front->left] = true;
                    flag = true;
                }
                
                if(front->right && !visited[front->right]){
                    q.push(front->right);
                    visited[front->right] = true;
                    flag = true;
                }
                
                if(nodeToParent[front] && !visited[nodeToParent[front]]){
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = true;
                    flag = true;
                }
                
            }
            if(flag == true){
                    timer++;
            }
        }
        return timer;
        
    }
    int minTime(Node* root, int target) {
        // 1. create nodeToParent mapping
        map<Node*, Node*> nodeToParent;
        Node* targetNode = createMapping(root, target, nodeToParent);
        
        // 2. Calculate the time taken
        int timer = burnTree(targetNode, nodeToParent);
        return timer;
    }
};