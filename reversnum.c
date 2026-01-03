#include<stdio.h>
int main(){
  int num = 1234;
 int  rev=0;
 int remainder;
  while(num !=0){
    remainder = num % 10;
    rev = rev * 10 +remainder;
    num = num/10;
  }
  printf("Reversed number: %d",rev);
return 0;
  

}