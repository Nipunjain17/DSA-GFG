/* Node structure

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        if(head == NULL || head->next == NULL) return;
        
        Node* prev = head;
        Node* curr = head->next;
        
        Node* joiningPoint = head->next;
        
        while(prev->next != NULL && curr->next != NULL){
            prev->next = curr->next;
            prev = prev->next;
            
            curr->next = prev->next;
            curr = curr->next;
        }
        
        prev->next = joiningPoint;
    }
};