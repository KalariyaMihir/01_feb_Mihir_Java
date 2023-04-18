// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>
void main()
{
    int i, j, a[10], swap;
    char ch;

    // pass message to user to choose A for ascending or D for Descending  
    printf("Enter A for ascending or Enter D for Descending ");
    scanf("%c", &ch);

    // to Pass Message to user
    printf("Enter Numbers in Random Order : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]); // Value passed
    }
    
    // Using Switch case to give choice for Ascending & Descending to user select any one   
    switch (ch)
    {

    case 'A':
        // loop for scan number 1 by 1
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (a[i] > a[j])
                {

                    // used swap method for create ascending order of number
                    swap = a[i];
                    a[i] = a[j];
                    a[j] = swap;
                }
            }
        }
        printf("Ascending Numbers :");
        for (i = 0; i < 5; i++)
        {
            printf("%d, ", a[i]);
        }

        break;


    case 'D':
        // Descending order
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (a[i] < a[j])
                {

                    // used Swap method for create Descending order of number
                    swap = a[i];
                    a[i] = a[j];
                    a[j] = swap;
                }
            }
        }
        printf("\nDescending Numbers :");
        for (i = 0; i < 5; i++)
        {
            printf("%d, ", a[i]);
        }
        break;

    default:

        printf("Your Choice is Not Available");
        
        break;
    }
}

