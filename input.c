#include <stdio.h>
int main(){
  int age;
  float gpa = 0.0f;
  char grade = '0';
  char name[30] = "";
  
  printf("Enter your age: ");
  scanf("%d",&age);
  printf("enter your Gpa :");
  scanf("%f",&gpa);
  printf("enter your grade:");
  scanf("%c",&grade);
  printf("enter your name:");
  scanf("%s",&name);

  printf(" %d",age);
    printf(" %f",gpa);

      printf(" %c",grade);
  printf(" %s",name);


  
}