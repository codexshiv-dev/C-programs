#include<stdio.h>
int main(){
 
  //reverse the number 
  int num,rem;
  printf("Enter the number :");
  scanf("%d",&num);
  while (num > 0)
  {
    /* code */
    rem = num% 10;
    printf("%d",rem);
    num /= 10;
  }
  

  
  return 0;
  
}