#include<stdio.h>
int main(){
  char ch;
  scanf("%c",&ch);
  if(ch>='a'&&ch<='z'){
    printf("It is a small character.");
  }else if(ch>='A'&&ch<='Z'){
    printf("It is a capital character.");
  }else if(ch>= '0' && ch<='9'){
    printf("It is a digit.");
  }else{
    printf("It is a symbolic charater.");
  }
  return 0;
}