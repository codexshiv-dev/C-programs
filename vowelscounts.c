#include<stdio.h>
int main(){
  char strn[100];
  int count =0,i;
  fgets(strn,sizeof(strn),stdin);
  printf("Enter the string: ");
  for(i=0;strn[i]!='\0';i++){
      if(strn[i] == 'a' ||strn[i] == 'e' ||strn[i] == 'i' ||strn[i] == 'o' ||strn[i] == 'u' ||strn[i] == 'A' ||strn[i] == 'E' ||strn[i] == 'I' ||strn[i] == 'O' ||strn[i] == 'U')
      count++;
  }
  printf("Number of vowels = %d",count);
}