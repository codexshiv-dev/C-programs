#include<stdio.h>
int main(){
  int sum,rem ,digit,position = 1;
  int number = 123456;

  while(number>0){
    rem = number%10;
    if (position % 2 == 1){
    sum = sum + rem;
    
    }
   digit = number %10;
    position ++;
  }
  printf("sum = %d",sum);

 return 0;  
}