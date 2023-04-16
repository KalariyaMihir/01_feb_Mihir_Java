/**
WAP to Print : 1  
               1 0  
               1 0 1  
               1 0 1 0  
               1 0 1 0 1 
 */

#include <stdio.h>

int main()
{
    int i,j,rows;

    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
             if(j % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        printf(" ");
        }
        
        printf(" \n");  
    }

    return 0;

}