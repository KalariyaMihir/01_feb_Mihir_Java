// WAP to Find Area of Circle
#include<stdio.h>
#define pi 3.14
void main()
{
    float area;
    float radius;
    printf("Enter Radius of Circle : ");
    scanf("%f",&radius);
    area =pi*radius*radius; 
    printf("Total Area of Circle is :%f",area);
}
