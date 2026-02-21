/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        if(head1 == NULL || head2 == NULL) return NULL;
        
        Node* ans = new Node(-9999);
        Node* curr = ans;
        
        while(head1 != NULL && head2 != NULL){
            if(head1->data == head2->data){
                curr->next = head1;
                curr = curr->next;
                head1 = head1->next;
                head2 = head2->next;
                curr->next = NULL;
            }
            else if(head1->data < head2->data){
                head1 = head1->next;
            }
            else{
                head2 = head2->next;
            }
        }
        return ans->next;
    }
};