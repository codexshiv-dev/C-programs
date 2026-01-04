#include<stdio.h>
int main(){
  int num[5];
  int even =0,odd=0;
  printf("Enter the number:\n");
  for(int i=0;i<5;i++){
    scanf("%d",&num[i]);
  }
  for(int i =0;i<5;i++){
    if(num[i] %2==0){
      even++;
    }else{
      odd++;
    }
  }
  printf("Event number is: %d\n",even);
  printf("Odd number is: %d\n",odd);
  return 0;
}