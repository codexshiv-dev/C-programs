#include<stdio.h>
void sum(int ,int );
int main(){
  int b,c;
  scanf("%d",&b);
  scanf("%d",&c);

    sum(b,c);
    return 0;
}
void sum(int a,int b){
 int sum = a+b;

 printf("%d",sum);
}

