class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
       vector<pair<int,int>> result;
       
       int n = arr1.size(), m = arr2.size();
       sort(arr1.begin(),arr1.end());
       sort(arr2.begin(),arr2.end());
       
       int i = 0, j = m-1;
       while(i < n && j >= 0){
           int sum = arr1[i] + arr2[j];
           
           if(sum == target){
               int val1 = arr1[i], val2 = arr2[j];
               
               int count1 = 0;
               while(i < n && val1 == arr1[i]){
                   count1++;
                   i++;
               }
               
               int count2 = 0;
               while(j >= 0 && val2 == arr2[j]){
                   count2++;
                   j--;
               }
               
               for(int k=0; k<count1*count2; k++){
                   result.push_back({val1,val2});
               }
           }
           else if(sum < target){
               i++;
           }
           else{
               j--;
           }
       }
       return result;   
    }
};





