// WAP to Print Table

#include <stdio.h>
int main()
{
    int i,Table,ans ;

    // Enter table no that you want to create
    printf("Create Table of : ");
    scanf("%d", &Table);

    //print Table 
    printf("\n\n\t-- Table of %d is --\n\n",Table); 
    
    // Start loop from 1 and increment it by 1 until it reach 10
    for (i = 0; i <= 10; i++)
    {
        
        // Formula to create table
        ans = Table * i;
        
        // Print Table like --> 1 * 1 = 1
        printf("\t \n%d * %d = %d",Table,i,ans);

    }
}