/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        if(head == NULL) return {}; // No node is present in linked list
        
        vector<int> arr;
        Node* temp = head;
        while(temp != NULL){
            arr.push_back(temp->data);
            temp = temp->next; 
        }
        
        return arr;
    }
};