#include<stdio.h>
int main(){
  int a,b,sum;
  int *p,*q;
  printf("enter the first number: ");
  scanf("%d %d",&a,&b);
  p = &a;
  q= &b;
   
  sum = *p + *q;
  printf("sum of %d and %d is : %d\n",*p,*q,sum);
  return 0;

}
