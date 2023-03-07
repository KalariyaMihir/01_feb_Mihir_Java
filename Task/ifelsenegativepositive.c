#include<stdio.h>
void main()
{
    int no;
    printf("Enter The Number:");
    scanf("%d",&no);
    if (no > 0)
    {
        printf("'The Given Number is Positive'");
    }
    else if (no == 0)
    {
        printf("The Given Number is Neutral");
    }
    
    else
    {
        printf("'The Given Number is Negative");
    }
}