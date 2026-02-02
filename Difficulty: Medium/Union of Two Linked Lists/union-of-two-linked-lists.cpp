/*
// structure of the node is as follows

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        set<int> unique;
        
        while(head1 != NULL){
            unique.insert(head1->data);
            head1 = head1->next;
        }
        
        while(head2 != NULL){
            unique.insert(head2->data);
            head2 = head2->next;
        }
        
        Node* temp = new Node(-99999);
        head1 = temp;
        
        for(auto i:unique){
            temp->next = new Node(i);
            temp = temp->next;
        }
        
        return head1->next;
    }
};