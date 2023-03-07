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
    else if(Years % 100==0)
    {
        printf("%dThis Year is not Leap Year",Years);
    }
    else if (Years % 4==0)
    {
        printf("%d Year is a Leap year",Years);
    }
    
    else
    {
        printf("This Year is Not Leap Year");
    }
}
