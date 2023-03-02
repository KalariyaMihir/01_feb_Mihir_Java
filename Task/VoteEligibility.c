// This Program is about Vote Eligibility  
#include<stdio.h>
void main()
{
    int age;
    printf("Enter your current age : ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("Congratlation You are Eligible for Voting :");
    }
    else
    {
        printf("OPS You are Not Eligible For Voting :");
    }
}