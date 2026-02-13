/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        if(head == NULL || head->next == NULL) return head;
        
        // To handle the first position
        if(x == 1){
            head = head->next;
            head->prev = NULL;
            return head;
        }
        
        Node* prev = NULL;
        Node* curr = head;
        
        for(int i=1; curr != NULL && i<x; i++){
            prev = curr;
            curr = curr->next;
        }
        
        // if x is out of bounds
        if(curr == NULL) return head;
        
        if(curr->next != NULL){
            curr->next->prev = prev;
        }
        
        prev->next = curr->next;
        
        return head;
    }
};