/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        Node* newNode = new Node(x);
        if(head == NULL) return newNode;
        int mid = 0;
        Node* temp = head;
        while(temp != NULL){
            mid ++;
            temp = temp->next;
        }
        temp = head;
        for(int i=1; i<(mid+1)/2; i++){
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        temp->next = newNode;
        
        return head;
    }
};