#include<stdio.h>
#include<string.h>
int main(){
  char choice = '\0';
  float   celsius;
  float fahrenheit;
  
  
  printf("Temperature converison!!\n");
  printf("C. Celsius to fahrenheit\n");
  printf("F. Fahrenheit to celsius\n");
  printf("Is the temp is celsius (C) or Fahrenheit (F)?:");
  scanf("%c",&choice);

  if(choice == 'c'){
     printf("Enter the temperature in celsius:");
     scanf("%f",&celsius);
     fahrenheit = (celsius * 9/5) + 32; 
      printf("%.1f Celsius is equal to %.1f Fahrenheit\n",celsius,fahrenheit);
  }else if (choice == 'f'){
      printf("Enter the temperature in Fahrenheit :");
      scanf("%f",&fahrenheit);
    celsius = (fahrenheit -32)* 5/9;
    printf("%.1f Fahrenheit is equal to %.1f Celsius \n",fahrenheit,celsius);
  }else{
    printf("Invalid choice! please select C or F\n");
  }
  
  return 0;
}