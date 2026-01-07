/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) { // delete by position
        if(x == 1){ // for head / 1st node 
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }
        else{
            Node* prev = NULL;
            Node* curr = head;
            int cnt = 1;
            while(cnt < x){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            if(curr == NULL) return head;
            
            prev->next = curr->next;
            curr->next = NULL;
            return head;
        }
    }
};