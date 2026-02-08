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
    vector<int> displayList(Node *head) {
        vector<int> result;
        Node* temp=head;
        while(temp!=NULL){
            result.push_back(temp->data);
            temp=temp->next;
        }
        return result;
    }
};