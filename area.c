#include <stdio.h>

#define Ω 3.14159   // symbolic constant

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = Ω * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
