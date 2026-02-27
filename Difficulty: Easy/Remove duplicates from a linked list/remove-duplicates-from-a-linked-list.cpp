/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
       Node * temp=head;
       unordered_set<int> exists;
       if(!head->next)
        return head;
        exists.insert(head->data);
        while(temp->next){
            if(exists.find(temp->next->data) != exists.end()){
                temp->next=temp->next->next;
            }else{
                exists.insert(temp->next->data);
                temp=temp->next;
            }
        }
        return head;
    }
};