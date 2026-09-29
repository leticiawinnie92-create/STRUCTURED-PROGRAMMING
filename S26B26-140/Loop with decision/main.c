#include <stdio.h>
#include <stdlib.h>

int main()
{
     double Radius,Diameter,Circumference,Area;
    printf("enter radius of circle");
    scanf("%lf",&Radius);
    Diameter=2*Radius;
    Circumference=2*3.14159*Radius;
    Area=3.14159*Radius*Radius;
    printf("The circumference of the circle is %.2f\n",Circumference);
    printf("The diameter is %.2f\n",Diameter);
    printf("The area of the circle is %.2f",Area);
    return 0;
}
