// WAP to Find Area of Circle
#include<stdio.h>
void main()
{
    float pie;
    float area;
    float radius;
    pie = 3.14;
    printf("Enter Radius of Circle : ");
    scanf("%f",&radius);
    area =pie*radius*radius; 
    printf("Total Area of Circle is :%f",area);
}
