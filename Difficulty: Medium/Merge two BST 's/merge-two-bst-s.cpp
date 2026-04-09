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
    void InOrder(Node* root, vector<int>& in){
        if(root == NULL){
            return;
        }
        
        InOrder(root->left, in);
        in.push_back(root->data);
        InOrder(root->right, in);
        return;
    }
    vector<int> merging(vector<int>& in1, vector<int>& in2){
        vector<int>ans;
        int i = 0, j = 0;
        
        while(i < in1.size() && j < in2.size()){
            if(in1[i] < in2[j]){
                ans.push_back(in1[i++]);
            }
            //else if(in1[i] == in2[j]){
              //  ans.push_back(in1[i++]);
                //j++;
            //}
            else{
                ans.push_back(in2[j++]);
            }
        }
        
        while(i < in1.size()){
            ans.push_back(in1[i++]);
        }
        
        while(j < in2.size()){
            ans.push_back(in2[j++]);
        }
        
        return ans;
    }
  public:
    vector<int> merge(Node *root1, Node *root2) {
        // code here
        vector<int> in1;
        InOrder(root1, in1);
        
        vector<int> in2;
        InOrder(root2, in2);
        
        vector<int> merge = merging(in1, in2);
        
        return merge;
    }
};