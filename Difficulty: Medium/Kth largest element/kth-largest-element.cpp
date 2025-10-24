class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        int n = arr.size();
        
        // Create Min Heap Tree
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for(int i=0; i<k; i++){
            minHeap.push(arr[i]);
        }
        
        for(int i=k; i<n; i++){
            if(arr[i] > minHeap.top()){
                minHeap.pop();
                minHeap.push(arr[i]);
            }
        }
        return minHeap.top();
    }
};