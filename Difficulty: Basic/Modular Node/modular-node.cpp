/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
class Solution {
  public:
    int modularNode(Node *head, int k) {
        if(k<=0) return -1;
        Node* temp=head;
        int idx=0;
        int result=-1;
        while(temp!=NULL){
            idx++;
            if(idx%k==0){
            result=temp->data;
            }
            temp=temp->next;
        }
        return result;
    }
};