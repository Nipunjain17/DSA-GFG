/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        int cnt = 0;
        Node* curr = head;
        while(curr != NULL){
            cnt++;
            curr = curr->next;
        }
        if(cnt == 1){
            curr = head;
            head = NULL;
            return head;
        }
        int mid;
        if(cnt%2 == 0) mid = (cnt/2)+1;
        else mid = (cnt+1)/2;
        
        cnt = 0;
        Node* prev = NULL;
        curr = head;
        while(cnt < mid-1){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        return head;
    }
};