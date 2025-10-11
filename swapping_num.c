#include<stdio.h>
int main(){
  //swapping two variable without using the third variable
  int num1 = 10,num2 =20;
   printf("Given value of Num1 = %d\n Num2 =%d\n",num1,num2);
   num2 = num2 + num1;
   num1 = num2 - num1;
   num2 = num2 - num1;
    printf("Result value of Num1 = %d\nNum2 = %d\n",num1,num2);

}