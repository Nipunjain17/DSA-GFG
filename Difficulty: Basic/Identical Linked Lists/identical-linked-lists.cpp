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
    bool areIdentical(Node *head1, Node *head2) {
        Node* temp = head1;
        Node* temp1 = head2;
        while(temp != NULL && temp1 != NULL){
            if(temp->data != temp1->data){
                return false;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
        if(temp != NULL && temp1 == NULL){
            return false;
        }
        if(temp == NULL && temp1 != NULL){
            return false;
        }
        return true;
    }
};