#include<stdio.h>
int main(){
  int choice;
  float pound;
  float kilogram;
  float result;

  
  printf("Weight conversion calculator!!");
  printf("1. kilogram to pounds\n");
  printf("2. pounds to kilogram\n");
  printf("Enter your choice 1 or 2 : ");
  scanf("%d",&choice);

  if(choice == 1){
     printf("Enter the kilogram:");
     scanf("%f",&kilogram);

      result = kilogram *2.204623;
      printf("result :%.2f",result);
  }else if (choice == 2){
      printf("Enter the pound:");
      scanf("%f",&pound);
    result =  pound /2.204623;
     printf("result :%.2f",result);
  }else{
    printf("The choice is out of bound!");
  }
  
  return 0;
}