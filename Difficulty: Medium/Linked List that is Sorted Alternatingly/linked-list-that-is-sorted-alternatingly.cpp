/*
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data =x;
        next = NULL;
    }
};
*/

class Solution {
  private:
    Node* reverse(Node* head){
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
    Node* sort(Node* head) {
        if(head == NULL || head->next == NULL) return head;
        
        Node* first = head;
        Node* second = head->next;
        
        Node* slow = first;
        Node* fast = second;
        
        while(fast != NULL && fast->next != NULL){
            slow->next = fast->next;
            slow = slow->next;
            
            fast->next = slow->next;
            fast = fast->next;
        }
        
        second  = reverse(second);
        
        slow->next = second;
        
        return first;
    }
};