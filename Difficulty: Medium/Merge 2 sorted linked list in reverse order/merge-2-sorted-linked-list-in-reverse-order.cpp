/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution {
  private:
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
  public:
    struct Node *mergeResult(Node *node1, Node *node2) {
        // base case
        if(node1 == NULL) return node2;
        if(node2 == NULL) return node1;
        
        Node* dummy = new Node(-9999);
        Node* curr = dummy;
        
        while(node1 != NULL && node2 != NULL){
            if(node1->data < node2->data){
                curr->next = node1;
                node1 = node1->next;
            }
            else{
                curr->next = node2;
                node2 = node2->next;
            }
            curr = curr->next;
        }
        
        while(node1 != NULL){
            curr->next = node1;
            node1 = node1->next;
            curr = curr->next;
        }
        
        while(node2 != NULL){
            curr->next = node2;
            node2 = node2->next;
            curr = curr->next;
        }
        
        
        dummy = reverse(dummy->next);
        
        return dummy;
        
    }
};