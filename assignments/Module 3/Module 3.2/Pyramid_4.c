/*
WAP to Print : A 
               A B 
               A B C 
               A B C D 
               A B C D E 
*/

#include <stdio.h>  

void main()  
{  
      
    int i, j, rows;  
    printf (" Enter a number of Rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 65; i <= 70; ++i)   
    {  
        for ( j = 65; j <= i; ++j)
        {
            printf("%c ",j);
        }
        printf("\n");
    }        
}  
