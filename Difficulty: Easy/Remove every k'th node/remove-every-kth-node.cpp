/* Link list Node

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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        Node* curr = head;
        int i = 1;
        while(curr != NULL){
            i++;
            if(i == k){
                if(curr->next !=NULL) curr->next = curr->next->next;
                i = 1;
            }
            curr = curr->next;
        }
        return head;
    }
};