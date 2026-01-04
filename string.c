#include<stdio.h>
#include<string.h>
int main(){
  char str1[50];
  char str2[50];
  char str3[50];
  int result;
  printf("enter first string: ");
  fgets(str1,sizeof(str1),stdin);
  printf("enter second string: ");
   fgets(str2,sizeof(str2),stdin);
  
   strcpy(str3,str1);
   printf("\nCopied string (str3):%s",str3);
   result=strcmp(str1,str2);
   if(result == 0){
    printf("strings are equal.\n");
   }else{
      printf("strings are not qual\n");
   }
   strcat(str1,str2);
   printf("concatenated string:%s",str1);
   return 0;


}