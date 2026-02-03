// User function Template for C++
class Solution {
  public:
    int countTriplets(struct Node* head, int x) {
        vector<int> arr;
        while(head != NULL){
            arr.push_back(head->data);
            head = head->next;
        }
        
        int n = arr.size();
        int count = 0;
        for(int i=0; i<n-2; i++){
            int left = i+1, right = n-1;
            
            while(left < right){
                int sum = arr[i] + arr[left] + arr[right];
                
                if(sum == x){
                    left++;
                    right--;
                    count++;
                }
                else if(sum < x){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return count;
    }
};