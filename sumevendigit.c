#include<stdio.h>
int main(){
  int number,digit,sum=0;
  printf("enter the number:");
  scanf("%d",&number);
  while(number>0){
    digit = number%10;
    if(digit %2 == 0){
      sum +=digit;
    }
    number=number/10;
  }
  printf("The sum of the even digit is : %d",sum);
  return 0;
}
