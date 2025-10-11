#include<stdio.h>
int main(){
   int num,rem; 
   printf("Enter the number for check  number is even or odd :");

   scanf("%d",&num);
   rem = num%2;
   if(rem == 0){
    printf("Number is Even");
   }else{
    printf("Number is Odd");
   }

   return 0;

}