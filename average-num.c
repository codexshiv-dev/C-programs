#include<stdio.h>
int main(){
  int a=2,b=3, c=4,sum,average;
  scanf("%d %d %d",&a,&b,&c);
  sum = a+ b+c;
  average = sum/3;

  printf("Sum of three numbers:%d\n Average of three numbers: %d\n",sum,average);
  return 0;

}