// User function template in C++

/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

*/

class Solution {
    Node* solve(int pre[], int& i, int mini, int maxi, int size){
        if(i >= size){
            return NULL;
        }
        
        if(pre[i] < mini || pre[i] > maxi){
            return NULL;
        }
        
        Node* root = newNode(pre[i++]);
        
        root->left = solve(pre, i, mini, root->data, size);
        root->right = solve(pre, i, root->data, maxi, size);
        
        return root;
    }
  public:
    // Function that constructs BST from its preorder traversal.
    Node* Bst(int pre[], int size) {
        int mini = INT_MIN;
        int maxi = INT_MAX;
        int i = 0;
        
        Node* root = solve(pre, i, mini, maxi, size);
        return root;
    }
};