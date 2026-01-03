#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int odd =1;
  int sum= 0;
  for(int i=1;i<=N;i++){
    sum = sum +odd;
    odd = odd+2;

  }
  printf("Nth odd sum: %d",sum);
  return 0;

}