#include<stdio.h>
#include <math.h>
int main(){
   int x = 4,a,b,c,d,e ,f,g,h,i;
//here are math function 
    x = sqrt(x);  //give square of the number
    a = pow(x,2);
    b = round(x);
    c = ceil(x);
    d = floor(x);
    e  = abs(x);
    f = log(x);
    g = sin(x);
    h = cos(x);
    i = tan(x);

      printf("This is the  square function of %d is %d\n",x,x);
      printf("This is the power function of %d is %d\n",x,a);
      printf("This is the round function of %d is %d\n",x,b);
      printf("This is the ceil function of %d is %d\n",x,c);
      printf("This is the floor function of %d is %d\n",x,d);
      printf("This is the absolute value function of %d is: %d\n",x,e);
      printf(" The log value of %f is  %f\n",x,f);
      printf(" The  sin value of %d is  %d\n",x,g);
      printf(" The cos value of %d is  %d\n",x,h);
      printf(" The tan value of %d is  %d\n",x,i);
  return  0;

}