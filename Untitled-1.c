#include<stdio.h>
int main(){
  int num = 1234;
  int rev = 0;
  for(int i=0;i!=num; i++){
    rev = rev *10+(num%10);
    num /=10;

  }
  printf("%d",rev);
  return 0;
}