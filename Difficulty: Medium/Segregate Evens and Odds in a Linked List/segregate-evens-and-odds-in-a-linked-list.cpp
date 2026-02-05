// User function template for C++

/*
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
    Node* divide(Node* head) {
        if(head == NULL || head->next == NULL) return head;
        
        Node* oddNode = new Node(-1);
        Node* evenNode = new Node(-1);
        
        Node* odd = oddNode;
        Node* even = evenNode;
        
        while(head!= NULL){
            int curr = head->data;
            
            if(curr % 2 == 0){
                even->next = head;
                even = even->next;
            }
            else{
                odd->next = head;
                odd = odd->next;
            }
            
            head = head->next;
        }
        
        even->next = (oddNode->next)? oddNode->next : NULL;
        odd->next = NULL;
        
        return evenNode->next;
    }
};