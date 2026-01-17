/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // floyd's cycle detection algorithm
        if(head == NULL || head->next == NULL) return false;
        
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
        
        if(!hasLoop) return false;
        else return true;
    }
};