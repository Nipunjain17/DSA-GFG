// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/
class Solution {
  public:
    Node* reverseBetween(int a, int b, Node* head) {
        if(head == NULL || a == b) return head;
        
        Node* dummy = new Node(-2);
        dummy->next = head;
        Node* prev = dummy;
        for(int i=0; i<a-1; i++){
            prev = prev->next;
        }
        
        Node* curr = prev->next;
        for(int i=0; i<b-a; i++){
            Node* forward = curr->next;
            curr->next = forward->next;
            forward->next = prev->next;
            prev->next = forward;
        }
        
        return dummy->next;
    }
};