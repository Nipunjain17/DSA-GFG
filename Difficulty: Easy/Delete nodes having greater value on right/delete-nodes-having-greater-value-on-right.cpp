/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  private:
    Node *reverse(Node* head){
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
    Node *compute(Node *head) {
        if(head == NULL || head->next == NULL)return head;
        
        head = reverse(head);
        
        Node* curr = head;
        Node* maxNode = head;
        while(curr != NULL && curr->next != NULL){
            if(maxNode->data > curr->next->data){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
                maxNode = curr;
            }
        }
        
        return reverse(head);
    }
};