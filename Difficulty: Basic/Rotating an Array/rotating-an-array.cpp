// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        vector<int> vec;
        int n=arr.size();
        for(int i=d;i<n;i++)
        {
            vec.push_back(arr[i]);
        }
        for(int i=0;i<d;i++)
        {
            vec.push_back(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=vec[i];
        }
    }
};