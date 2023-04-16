// Find out How many Even numbers are there using loop
#include<stdio.h>

int main()
{
    int no;

    // Enter Number from 1 to .....n for find how many number are even in between 
    printf("Find Even number from 1 to --> ");
    scanf("%d",&no);

    // For print even numbers
    printf("\nEven Numbers From 1 to %d is : ",no);

    // start loop from 1 and increment it by 1
    for (int i = 1; i < no ; i++)
    {

        // condition for check even number
        if (i % 2 == 0)
        {
            printf("%d, ",i);
        }
        
    }

    
    
}