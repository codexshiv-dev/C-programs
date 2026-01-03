#include<stdio.h>
int main(){
  int num = 123456789;
  int rev = 0;
  int rem;
  do{
    rem = num%10;
    rev = rev *10+ rem;
    num = num/10;
  }while(num !=0);
  printf("%d",rev);
  return 0;
}