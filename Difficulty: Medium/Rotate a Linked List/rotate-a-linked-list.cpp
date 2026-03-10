/*
class Node {
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
    Node* rotate(Node* head, int k) {
        // base case
        if(head == NULL || head->next == NULL || k == 0) return head;
        
        
        Node* curr = head;
        int cnt = 0;
        while(curr->next != NULL){
            curr = curr->next;
            cnt++;
        }
        // make LL circular
        curr->next = head;
        
        curr = head;
        for(int i=0; i<k-1 ; i++){
            curr = curr->next;
        }
        
        head = curr->next;
        // break the linkage
        curr->next = NULL;
        
        return head;
    }
};