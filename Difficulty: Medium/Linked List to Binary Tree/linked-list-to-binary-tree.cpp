/*
class NodeLL {
  public:
    int data;
    NodeLL *next;

    NodeLL(int x) {
        data = x;
        next = NULL;
    }
};
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
  public:
    Node *linkedListToBinaryTree(NodeLL *head) {
        
        Node* root = new Node(head->data);
        queue<Node*> q;
        q.push(root);
        head = head->next;
        while(head != NULL && !q.empty()){
            Node* temp = q.front();
            q.pop();
            
            temp->left = new Node(head->data);
            q.push(temp->left);
            head = head->next;
            
            if(head == NULL) break;
            
            temp->right = new Node(head->data);
            q.push(temp->right);
            head = head->next;
        }
        
        return root;
    }
};