// Find out How many Odd numbers are there using loop

#include<stdio.h>

int main()
{
    int no;

    // Enter Number from 1 to .....n for find how many number are even in between 
    printf("Find Odd number from 1 to --> ");
    scanf("%d",&no);

    // For print Odd numbers
    printf("\nOdd number From 1 to %d is : ",no);

    // start loop from 1 and increment it by 1
    for (int  i = 1; i < no ; i++)
    {

        // Condition for check odd number
        if (i % 2 != 0)
        {
            printf("%d, ",i);
        }
        
    }
    
}