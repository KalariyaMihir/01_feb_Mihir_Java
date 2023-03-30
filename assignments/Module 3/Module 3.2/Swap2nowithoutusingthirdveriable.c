// Write a program to swap two numbers without using third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter First Value :");
    scanf("%d",&a);
    printf("\nEnter Second Value : ");
    scanf("%d",&b);
    printf("\n \t%d + %d = %d",a,b,a+b);
    printf("\n \t%d - %d = %d",a,b,a-b);
    printf("\n \t%d / %d = %d",a,b,a/b);
    printf("\n \t%d * %d = %d",a,b,a*b);
    printf("\n \tIncrement of A : %d  ",++a);
    printf("\n \tDecrement of B : %d ",--b);

}