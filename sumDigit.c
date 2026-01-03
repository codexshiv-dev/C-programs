#include<stdio.h>
int main(){
  int digits,d1,d2,d3,sum;
  printf("Enter digits:");
  scanf("%d",&digits);
   d1 = digits %10;
   d2 = (digits/10)%10;
   d3 = digits /100;

   sum = d1+d2+d3;
   printf("Sum of digit is : %d ",sum);
   return 0;
  
}