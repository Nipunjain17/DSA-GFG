/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
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
    Node* addTwoLists(Node* head1, Node* head2) {
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        Node* dummy = new Node(0);
        Node* result = dummy;
        int carry = 0;
        while(head1 || head2 || carry){
            int sum = carry;
            
            if(head1){
                sum += head1->data;
                head1 = head1->next;
            }
            if(head2){
                sum += head2->data;
                head2 = head2->next;
            }
            
            int num = sum % 10;
            carry = sum / 10;
            dummy->next = new Node(num);
            dummy = dummy->next;
        }
        result = result->next;
        result = reverse(result);
        
        while(result->data == 0){
            result = result->next;
        }
        
        return result;
    }
};