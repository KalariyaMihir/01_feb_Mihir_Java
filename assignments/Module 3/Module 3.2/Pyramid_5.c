/*
WAP to Print :           * 
                       * * * 
                     * * * * * 
                   * * * * * * * 
                 * * * * * * * * * 
               * * * * * * * * * * * 
 

*/

#include<stdio.h>
 int main()
 {
    int i,j,k = 0,rows;

    printf("Enter Number of Rows : ");
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++ , k = 0)
    {
        for (j = 1; j <= rows - i ; j++)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            k++;
        }
        
        printf("\n");
        
    }
    
 }