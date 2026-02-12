class kQueues {
  public:
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freeSpot;
    int n, k;

    kQueues(int n, int k) {
        this->n = n;
        this->k = k;

        arr = new int[n];
        next = new int[n];

        for (int i = 0; i < n - 1; i++) {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        front = new int[k];
        rear = new int[k];

        for (int i = 0; i < k; i++) {
            front[i] = -1;
            rear[i] = -1;
        }

        freeSpot = 0;
    }

    void enqueue(int x, int qi) {

        // overflow OR invalid queue
        if (freeSpot == -1 || qi < 0 || qi >= k) return;

        int index = freeSpot;
        freeSpot = next[index];

        if (front[qi] == -1) {
            front[qi] = index;
        } else {
            next[rear[qi]] = index;
        }

        next[index] = -1;
        rear[qi] = index;
        arr[index] = x;
    }

    int dequeue(int qi) {

        // underflow OR invalid queue
        if (qi < 0 || qi >= k || front[qi] == -1) return -1;

        int index = front[qi];
        front[qi] = next[index];

        if (front[qi] == -1) {
            rear[qi] = -1;
        }

        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }

    bool isEmpty(int qi) {
        if (qi < 0 || qi >= k) return false;
        return front[qi] == -1;
    }

    bool isFull() {
        return freeSpot == -1;
    }
};
