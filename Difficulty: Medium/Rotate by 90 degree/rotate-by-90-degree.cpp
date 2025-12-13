// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix) {
    int n = matrix.size();
        
        // 1.Transpose the matrixrix 
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // 2.Reverse the rows 
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
}
