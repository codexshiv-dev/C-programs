#include<stdio.h>
int main(){
  int num = 4;
  long fact=0;
  long sum =0;
  for(int i =1;i<=num;i++){
    fact =1;
    for(int j=1;j<=i;j++){
      fact = fact *j;
    }
    sum = sum+fact; //add factorial to sum
  }
  printf("Sum of series =%ld\n",sum);
  return 0;
}