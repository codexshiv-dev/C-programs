#include<stdio.h>
#include<stdbool.h>
int main(){
  int age = 22;
  float price = 19.9;
  double pi = 3.141529;
  char currency = '$';
  char name[] = "Shiv Gupta";

  printf("%d\n",age);
  printf("%f\n",price);
  printf("%lf\n",pi);
  printf("%c\n",currency);
  printf("%s\n",name);

  return 0;
}