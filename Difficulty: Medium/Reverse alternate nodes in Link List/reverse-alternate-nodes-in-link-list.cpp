/*
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
  struct Node
  {
      int data;
      struct Node *next;

      Node(int x){
        data = x;
        next = NULL;
      }

   };

*/
class Solution {
  private:
    Node* reverseLL(Node* head){
        if(head == NULL || head->next == NULL) return head;
        
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr != NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
  public:
    void rearrange(Node* head) {
        if(head == NULL || head->next == NULL) return;
        
        Node* first = head;
        Node* second = head->next;
        
        Node* curr = second;
       
        while(first->next != NULL && second->next != NULL){
            first->next = second->next;
            first = first->next;
            
            second->next = first->next;
            second = second->next;
        }
        
        Node* reverse = reverseLL(curr);
        
        first->next = reverse;
    }
};