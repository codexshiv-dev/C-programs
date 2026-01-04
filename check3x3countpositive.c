#include<stdio.h>
int main(){
  int mat[3][3];
  int pos=0,neg=0,zero=0;
  int i,j;
  printf("Enter the 9 number for 3x3 matrices.\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     scanf("%d",&mat[i][j]);
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if(mat[i][j] > 0){ 
        pos++;
      }else if(mat[i][j]<0){
        neg++;
      }else{
        zero++;
      }

    }
  }
  printf("Positive =%d, Negative = %d, Zero = %d\n",pos,neg,zero);
  return 0;
}