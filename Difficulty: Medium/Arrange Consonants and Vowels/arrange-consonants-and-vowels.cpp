/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  private:
    bool isVowel(char ch){
        return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    }
  public:
    Node* arrangeCV(Node* head) {
        if(!head || !head->next) return head;

        Node *vHead = NULL, *vTail = NULL;
        Node *cHead = NULL, *cTail = NULL;

        Node* curr = head;
        while(curr){
            Node* nextNode = curr->next;
            curr->next = NULL;   // detach

            if(isVowel(curr->data)){
                if(!vHead) vHead = vTail = curr;
                else {
                    vTail->next = curr;
                    vTail = curr;
                }
            } else {
                if(!cHead) cHead = cTail = curr;
                else {
                    cTail->next = curr;
                    cTail = curr;
                }
            }
            curr = nextNode;
        }

        if(!vHead) return cHead;      // no vowels
        vTail->next = cHead;          // join lists
        return vHead;
    }
};