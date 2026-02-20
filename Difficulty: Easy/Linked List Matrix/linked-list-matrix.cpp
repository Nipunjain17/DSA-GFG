/*structure of the node of the linked list is as

struct Node
{
    int data;
    Node* right, *down;

    Node(int x){
        data = x;
        right = NULL;
        down = NULL;
    }
};
*/

// function must return the pointer to the first element of the in linked list i.e. that
// should be the element at arr[0][0]
class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // Base Case
        if(mat.empty()) return NULL;
        
        int n = mat.size();
        
        Node* ans = new Node(mat[0][0]);
        Node* curr = ans;
        
        for(int i=0; i<n; ++i){
            Node* prev = curr;
            
            for(int j=0; j<n; ++j){
                
                // for right pointer
                if(j+1 < n) curr->right = new Node(mat[i][j+1]);
                
                // for down pointer 
                if(i+1 < n) curr->down = new Node(mat[i+1][j]);
                
                // go towards right
                curr = curr->right;
            }
            curr = prev->down;
        }
        return ans;
    }
};