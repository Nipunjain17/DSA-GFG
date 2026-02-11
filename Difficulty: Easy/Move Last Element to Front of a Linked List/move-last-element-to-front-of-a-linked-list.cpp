// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr->next != NULL){
          prev = curr;
          curr = curr->next;
        }
        curr->next = head;
        prev->next = NULL;
        head = curr;
        
        return head;
    }
};