class Solution {
  public:
    int partition(vector<int>& arr, int left, int right) {
        
        int pivot = arr[right];
        int i = left - 1;
        
        for(int j=left; j<=right-1; j++){
            if(arr[j] < pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[right]);
        
        return i+1;
    }
    
    void sort(vector<int>& arr, int left, int right){
        if(left < right){
            int pi = partition(arr,left,right);
            
            sort(arr,left,pi-1);
            sort(arr,pi+1,right);
        }
    }
    
    void quickSort(vector<int>& arr, int left, int right) {
        
        sort(arr,0,arr.size()-1);
    }
    
    
};