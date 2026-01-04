#include<stdio.h>
int main(){
  int number[10],temp;
  printf("Enter the ten number:\n");
  for(int i=0;i<10;i++){
    scanf("%d",&number[i]);
  }
  for(int i=0;i<9;i++){
    for(int j=i+1;j<10;j++){
      if(number[i]>number[j]){
         temp = number[i];
         number[i]=number[j];
         number[j]=temp;
      }
    }
  }
  printf("Ascending order:\n");
  for(int i = 0;i<10;i++){
    printf("%d ",number[i]);
  }
  return 0;
  
}