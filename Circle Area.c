/*To find area of a circle, taking the circle radius as an input from the user*/

#include<stdio.h>
int main()
{
    float radius, area;
    printf("\n\nHi there\n\nPlease enter the radius of the circle\n\n");
    scanf("%f",&radius);
    area=3.142*radius*radius;
    printf("\n\n\"Area of the circle is %0.2f having the radius %0.2f\"\n\n", area, radius);
    return 0;
}

