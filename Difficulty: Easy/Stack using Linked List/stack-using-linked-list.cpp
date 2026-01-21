/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
    Node* topNode;
  public:
    myStack() {
        // Initialize your data member
        topNode = NULL;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(topNode == NULL) return true;
        else return false;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        // Removes the top element of the stack
        Node* temp = topNode;
        topNode = topNode->next;
        temp->next = NULL;
        delete temp;
    }

    int peek() {
        if(topNode == NULL) return -1;
        else return topNode->data;
    }

    int size() {
        // Returns the current size of the stack.
        int cnt = 0;
        Node* curr = topNode;
        while(curr != NULL){
            curr = curr->next;
            cnt++;
        }
        return cnt;
    }
};