// Find Sum of Even numbers using loop

#include<stdio.h>

int main()
{
    int no,sum = 0;

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

            // Formula to do Addition of all Even number
            sum = sum + i;
        }
        
    }

    // For Print Sum of Even numbers
    printf("\n\nSum of All Even Numbers from 1 to %d is : %d ",no,sum);
    
    
}