#include<stdio.h>
int main(){
  char name[10] = "shiv";
  int mark_Obtained = 80;
  int max_marks = 100;
  float percentage ;

  percentage = (mark_Obtained/max_marks)*100;

  printf("Total marks obtained by %s is percentage = %.2f%%",name,percentage);

   return 0 ;

}