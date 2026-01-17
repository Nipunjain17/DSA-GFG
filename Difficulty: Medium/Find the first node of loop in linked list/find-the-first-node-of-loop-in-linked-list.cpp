/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        if(head == NULL || head->next == NULL) return -1;
        
        Node* slow = head;
        Node* fast = head;
        
        bool hasLoop = false;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                hasLoop = true;
                break;
            }
        }
        
        if(!hasLoop) return -1;
        
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow->data;
    }
};