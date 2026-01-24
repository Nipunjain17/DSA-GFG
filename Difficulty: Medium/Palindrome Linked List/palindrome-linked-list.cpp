/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    Node* findMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head) {
        
        Node* mid = findMid(head);
        
        Node* left = head;
        Node* right = mid->next;
        
        mid->next = NULL;
        
        right = reverse(right);
        
        while(left != NULL && right != NULL){
            if(left->data != right->data){
                return false;
            }
            left = left->next;
            right = right->next;
        }
        
        return true;
    }
};