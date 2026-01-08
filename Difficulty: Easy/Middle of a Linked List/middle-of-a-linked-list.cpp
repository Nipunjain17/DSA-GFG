/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        Node* curr = head;
        int mid = 0;
        while(curr->next != NULL){
            curr = curr->next;
            mid++;
        }
        mid = (mid + 1)/2;
        int cnt = 0;
        Node* prev = NULL;
        curr = head;
        while(cnt < mid){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        return curr->data;
    }
};