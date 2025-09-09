class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int num = n;
        int count = 0;
        while(num>0){
            int ld = num%10;
            if(ld == 0){
                // count ++;
                // break;
            }
            else if (n%ld == 0){
                count++;
            }
            num/=10;
            
        }
        return count;
    }
};