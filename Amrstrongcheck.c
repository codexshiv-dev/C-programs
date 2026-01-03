#include<stdio.h>
#include<math.h>
int main(){
  int number = 153;
  int remainder,sum=0,digit=0,copynum;
  //count digit
  copynum = number;
  while(copynum !=0){
    digit++;
    copynum = copynum/10;
  }//done name count
  copynum = number;
  while(copynum!=0){
   remainder = copynum%10;
   sum = sum + pow(remainder,digit);
   copynum = copynum/10;
  }
  if(number == sum){
    printf("Amrstrong Number");
  }else{
    printf("not a amrstron number");
  }
   
return 0 ;
}