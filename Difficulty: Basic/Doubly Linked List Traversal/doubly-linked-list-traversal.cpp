// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};

*/
vector<int> displayList(Node *head) {
    vector<int>res;
   
    for(Node*temp = head;temp != NULL; temp = temp->next){
        res.push_back(temp->data);
    }
    
    return res;
}