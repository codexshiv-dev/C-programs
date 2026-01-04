#include<stdio.h>
void Swap(int *a,int *b){
  int d;
   d=*a;
   *a=*b;
   *b=d;
    

}
int main(){
  int A,B;
  printf("Enter the value of a and b: ");
  scanf("%d %d",&A,&B);
    Swap(&A,&B);
     printf("a = %d and b= %d",A,B);
     return 0;
   
}