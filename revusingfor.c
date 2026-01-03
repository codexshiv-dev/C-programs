#include<stdio.h>
int main(){
  int num = 1234;
  int rev = 0;
  for(; num>0; num =num/10
){
    rev = rev *10+(num%10);
    

  }
  printf("%d",rev);
  return 0;
}