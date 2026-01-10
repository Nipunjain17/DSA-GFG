/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        Node* newNode = new Node();
         newNode->data = x;
         newNode->prev = newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            return newNode;
        }
        Node* previous = NULL;
        Node* curr = head;
        while(curr != NULL && curr->data < x){
            previous = curr;
            curr = curr->next;
        }
       
        
        if(previous == NULL){ // Insert at Head
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return newNode;
        }
        if(curr == NULL){ // At End
            previous->next = newNode;
            newNode->prev = previous;
            return head;
        }
        //  at another position
        previous->next = newNode;
        newNode->next = curr;
        newNode->prev = previous;
        curr->prev = newNode;
        return head;
    }
};