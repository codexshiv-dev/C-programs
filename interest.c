#include<stdio.h>
#include<math.h>
int main(){
  double principal = 0.0;
  double rate = 0.0;
  int years = 0;
  int timesCompounded = 0;
  double total = 0.0;
  
  printf("compound interest calculator\n");
  printf("enter the principal (p): ");
  scanf("%lf",&principal);
  printf("Enter the interest rate % (r): ");
  scanf("%lf",&rate);
  printf("Enter the number of year  (t): ");
  scanf("%d",&years);
  printf("Enter number of times compounded per year (n): ");
  scanf("%d",&timesCompounded);

  total = principal * pow(1+rate/timesCompounded,timesCompounded*years);

  printf("After %d years, the total will be $%.2lf",years,total);
   
  
  return 0;
}