class Solution {
  public:
    virtual bool multiplyMatrix(int mat1[4][4], int mat2[4][4], int result[4][4]){
      
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          int temp = 0;
          for(int k=0;k<4;k++){
              temp += (mat1[i][k] * mat2[k][j]);
          }
          
          if(temp != result[i][j])
            return false;
          
        }      
      }
      
      return true;
      
    }
};