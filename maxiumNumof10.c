#include<stdio.h>
int main(){
  int num[10];
  int max;
  printf("enter the number:\n");
  for(int i=0;i<10;i++){
    scanf("%d",&num[i]);
  }
  //assume firs index max
  max = num[0];
  for(int i = 1;i<10 ;i++){
    if(num[i]>max){
      max =num[i];
    }
  }
  printf("The maximun number is : %d",max);
  return 0;
}