/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    void reorderList(Node* head) {
        if(head == NULL || head->next == NULL) return;
        
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node* curr = slow->next;
        slow->next = NULL;
        Node* prev = NULL;
        while(curr != NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        Node* dummy = new Node(-999);
        curr = dummy;
        
        Node* first = head;
        Node* second = prev;

        while(first != NULL && second != NULL){
            Node* temp1 = first->next;
            Node* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
        head = dummy->next;
    }
};