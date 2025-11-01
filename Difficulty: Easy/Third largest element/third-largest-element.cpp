class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        
        if(n < 3){
            return -1;
        }
        
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for(int i=0; i<3; i++){
            minHeap.push(arr[i]);
        }
        
        for(int i=3; i<n; i++){
            if(arr[i] > minHeap.top()){
                minHeap.pop();
                minHeap.push(arr[i]);
            }
        }
        
        return minHeap.top();
    }
};