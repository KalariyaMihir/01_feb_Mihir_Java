#include<stdio.h>
void main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("\nGiven Number is Even");
    }
    else
    {
        printf("\nGiven Number is Odd");
    }
}