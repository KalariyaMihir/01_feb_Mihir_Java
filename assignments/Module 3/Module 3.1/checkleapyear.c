//WAP to check if the given year is a leap year or not.
#include<stdio.h>
void main()
{
    int Years;
    printf("Enter Year :");
    scanf("%d",&Years);
    if (Years%400==0)
    {
        printf("%dThis Year is Leap Year",Years);
    }
    else
    {
        printf("This Year is Not Leap Year");
    }
}
