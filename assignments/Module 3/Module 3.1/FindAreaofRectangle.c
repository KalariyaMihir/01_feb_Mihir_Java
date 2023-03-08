//WAP to Find a Arae Of Rectangle
#include<stdio.h>
void main()
{
    float length;
    float width;
    float area;
    printf("Enter The Length of Rectangle : ");
    scanf("%f",&length);
    printf("\nEnter The Width of Rectangle : ");
    scanf("%f",&width);
    area = length * width;
    printf("\nTotal Area of Rectangle is : %f",area);
}