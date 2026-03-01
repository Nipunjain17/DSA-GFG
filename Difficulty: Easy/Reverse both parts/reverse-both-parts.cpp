// User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    Node* reversedLL(Node* head){
        if(head -> next == NULL)
            return head;
        
        Node* prev = NULL;
        Node* temp = head;
        Node* next = NULL;
        
        while(temp){
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
        }
        
        return prev;
    }
    Node *reverse(Node *head, int k)
    {
        if(head -> next == NULL)
            return head;
        
        Node* temp = head;
        Node* head1 = head;
        Node* head2 = NULL;
        
        // dividing one into two distinct linked lists
        for(int i=1; i<k; i++){
            temp = temp -> next;
        }
        
        // saving the head of 2nd part of linked list
        head2 = temp -> next;
        temp -> next = NULL;
        
        // reversing both the linked lists seperately
        Node* ansHead = reversedLL(head1);
        Node* secondHead = reversedLL(head2);
        
        // connecting both the reversed linked lists
        head -> next = secondHead;
        return ansHead;
    }
};