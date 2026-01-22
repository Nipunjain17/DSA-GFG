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
    int addingOne(Node* head){
        // Base Case
        if(head == NULL) return 1;
        
        int carry = addingOne(head->next);
        
        int sum = head->data + carry;
        head->data = sum % 10;
        
        return sum/10;
    }
    Node* addOne(Node* head) {
        int carry = addingOne(head);
        
        if(carry){
            Node* newNode = new Node(carry);
            newNode->next = head;
            return newNode;
        }
        return head;
    }
};