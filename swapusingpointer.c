#include<stdio.h>
int main(){
  int a,b,temp;
  scanf("%d %d",&a,&b);
int *p,*q;
   
  p = &a;
  q =&b;
   
  temp = *p;
  *p= *q;
  *q =temp;
  printf("After swaping number is a =%d and b=%d",*p,*q);
  return 0;
  

}