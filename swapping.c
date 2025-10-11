#include<stdio.h>
int main(){

  //swapping number  using there variable
  int a=10,b=20,D;
  printf("Given value of A = %d\n B =%d\n",a,b);
  D = a;
  a = b;
  b = D;
  printf("Result value of A = %d\nB = %d\n",a,b);

  return 0;
}