#include<stdio.h>
int main(){
  int number,d1,d2,d3;
  scanf("%d",&number);
  d1 = number%10;
  d2 = (number/10)%10;
  d3 =number/100;
  if(d1>d2){
    if(d1>d3){
       printf("largest digit %d ",d1);
    }else{
      printf("largest digit %d ",d3);
    }
   
     
  } else{
   if(d2>d3){
      printf("largest digit %d ",d2);
   }else{
      printf("largest digit %d ",d3);
   }
  }
   return 0;
  }
   