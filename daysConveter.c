#include<stdio.h>
int main(){
  int days,months,rem_days;
  printf("Enter the days:");
  scanf("%d",&days);
   months = days/30;
   rem_days = days%30;
   printf("Month: %d\n",months);
   printf("Remaning Days: %d",rem_days);
   return 0;

}