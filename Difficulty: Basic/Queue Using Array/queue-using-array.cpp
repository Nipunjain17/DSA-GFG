class myQueue {
    int * arr;
    int size;
    int front, rear;
  public:
    myQueue(int n) {
        // Define Data Structures
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        // check if the queue is empty
        return front == -1;
    }

    bool isFull() {
        // check if the queue is full
        return  (rear+1) % size == front;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(rear == size-1) return;
    
        if(front == -1) front = 0;
        
        rear++;
        arr[rear] = x;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(front == -1) return;
        
        front++;
        
        if(front > rear){
            front = rear = -1;
            return;
        }
    }

    int getFront() {
        // Returns the front element of the queue.
        if(front == -1) return -1;
        else return  arr[front];
    }

    int getRear() {
        // Return the last element of queue
        if(rear == -1) return -1;
        else return arr[rear];
    }
};