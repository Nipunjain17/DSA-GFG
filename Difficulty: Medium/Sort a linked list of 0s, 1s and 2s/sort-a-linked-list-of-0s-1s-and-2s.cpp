/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        
        if(head == NULL || head->next == NULL) return head;
        
        Node* zeroNode = new Node(0);
        Node* oneNode = new Node(0);
        Node* twoNode = new Node(0);
        
        Node* zero = zeroNode;
        Node* ones = oneNode;
        Node* twos = twoNode;
        
        Node* curr = head;
        while(curr != NULL){
            
            if(curr->data == 0){
                zero->next = curr;
                zero = zero->next;
            }
            else if(curr->data == 1){
                ones->next = curr;
                ones = ones->next;
            }
            else{
                twos->next = curr;
                twos = twos->next;
            }
            curr = curr->next;
        }
        
        zero->next = (oneNode->next) ? oneNode->next : twoNode->next;
        ones->next = twoNode->next;
        twos->next = NULL;
        
        head = zeroNode->next;
        
        delete oneNode;
        delete zeroNode;
        delete twoNode;
        
        return head;
        
        
    }
};