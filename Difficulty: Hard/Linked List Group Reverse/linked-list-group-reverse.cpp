/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // Base Case
        if(head == NULL) return NULL;
        
        // Step-1, Reverse k-group of node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 0;
        while(curr != NULL && cnt < k){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            cnt++;
        }
        
        // Step-2, Recurrsive Call
        head->next = reverseKGroup(curr,k);
        
        return prev;
        
    }
};