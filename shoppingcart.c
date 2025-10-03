#include<stdio.h>
int main(){
  char item[50] = "";
  float price = 0.0f;
  int quantity = 0;
  char currency = '$';
  float total = 0.0f;

  printf("what item would you like to buy?:");
  fgets(item, sizeof(item),stdin);
  printf("what it the price for each?:");
  scanf("%f",&price);
  printf("How many would you like?:");
  scanf("%d",&quantity);
  total = quantity * price;
  printf(" you have bought %d %s and each price %.2f and ",quantity , item ,price);
  printf("Total Amount : %c%.2f",currency,total);
 
return 0;
   

}