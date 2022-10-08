#include<stdio.h>
int main()
{
    int radius;

    float area;

    printf("Enter a Radius :");

    scanf("%d",&radius);

    area=3.14*radius*radius;

    printf("Area of circle is %f having the radius %d.",area,radius);

    return 0;
}