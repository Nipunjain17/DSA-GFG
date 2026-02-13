class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        if(head == NULL || head->next == NULL) return head->data;
        
        Node* curr = head;
        int cnt = 0;
        while(curr != NULL){
            curr = curr->next;
            cnt++;
        }
        
        curr = head;
        int sum = 0;
        if(n == cnt){
            while(curr != NULL){
                sum += curr->data;
                curr = curr->next;
            }
            return sum;
        }
        else{
            for(int i=0; i<= cnt-n-1; i++){
                curr = curr->next;
            }
            
            while(curr != NULL){
                sum += curr->data;
                curr = curr->next;
            }
            return sum;
        }

    }
};