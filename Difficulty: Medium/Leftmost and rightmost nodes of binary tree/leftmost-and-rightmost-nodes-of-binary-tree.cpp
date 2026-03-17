/* Function to print corner node at each level */

/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
void printCorner(Node *root) {
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            Node* temp = q.front();
            q.pop();
            
            if(i == 0 || i == size-1){
                cout<<temp->data<<" ";
            }
            
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}