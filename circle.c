#include<stdio.h>
#include<math.h>
int main(){
  double radius = 0.0;
  double area = 0.0;
  double surfaceArea = 0.0;
  double volume = 0.0;

  const double PI = 3.14159;

  printf("enter the radius: ");
  scanf("%lf",&radius);

  area = PI * pow(radius,2); //area
  surfaceArea = 4 * PI *pow(radius,2); //surface area
  volume = (4/3)*PI*pow(radius,3);

  printf("Area : %.2lf\n",area);
  printf("Surface area of circle: %.2lf\n",surfaceArea);
  printf("volume : %.2lf",volume);

  return 0;

} 