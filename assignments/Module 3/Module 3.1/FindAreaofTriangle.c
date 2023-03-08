//WAP to Find Area of Triangle
#include<stdio.h>
void main()
{
    float hight;
    float base;
    float area;
    printf("Enter Hight of Triangle : ");
    scanf("%f",&hight);
    printf("\nEnter Base of Triangle : ");
    scanf("%f",&base);
    area=hight*base / 2;
    printf("\nArea of Triangle is : %f",area);

}