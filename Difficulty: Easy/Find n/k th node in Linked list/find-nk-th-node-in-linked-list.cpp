/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    int fractional_node(struct Node *head, int k) {
        int cnt = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }
        
        cnt = (cnt + k -1)/k;
        
        int index = 1;
        temp = head;
        while(index < cnt){
            temp = temp->next;
            index++;
        }
        return temp->data;
    }
};