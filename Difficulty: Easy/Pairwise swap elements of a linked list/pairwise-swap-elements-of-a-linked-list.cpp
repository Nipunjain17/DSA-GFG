/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution {
  public:
    Node* pairWiseSwap(Node* head) {
        if(head == NULL) return NULL;
        
        int k = 2, cnt = 0;
        Node* curr = head;
        while(curr != NULL && cnt < k){
            curr = curr->next;
            cnt++;
        }
        
        if(cnt < k) return head;
        
        cnt = 0;
        curr = head;
        Node* prev = NULL;
        while(curr != NULL && cnt < k){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            cnt++;
        }
        
        head->next = pairWiseSwap(curr);
        
        return prev;
    }
};