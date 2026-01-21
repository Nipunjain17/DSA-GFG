/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        Node* newNode = new Node(data);
        
        // Case-1, No Node is present
        if(head == NULL){
            newNode->next = newNode;
            return newNode;
        }
        
        // Case-2, Data is smaller than head
        if(data <= head->data){
            Node* last = head;
            while(last->next != head){
                last = last->next;
            }
            
            last->next = newNode;
            newNode->next = head;
            return newNode;
        }
        
        // Case-3, Somewhere in the list
        Node* curr = head;
        while (curr->next != head && curr->next->data < data) {
            curr = curr->next;
        }

        newNode->next = curr->next;
        curr->next = newNode;

        return head;
    }
};