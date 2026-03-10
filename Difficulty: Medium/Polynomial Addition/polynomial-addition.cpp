/* Structure of Node used
struct Node
{
    int coeff;
    int pow;
    struct Node* next;

    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
};
*/

class Solution {
  public:
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
    Node *addPolynomial(Node *head1, Node *head2) {
        // base case 
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
        
        if(head1->pow > head2->pow){
            head1->next = addPolynomial(head1->next, head2);
            return head1;
        }
        else if(head1->pow == head2->pow){
            head1->coeff += head2->coeff;
            head1->next = addPolynomial(head1->next, head2->next);
            return head1;
        }
        else{
            head2->next = addPolynomial(head1, head2->next);
            return head2;
        }
    }
};