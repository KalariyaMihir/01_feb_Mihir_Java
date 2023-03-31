// WAP to Print Table

#include <stdio.h>
int main()
{
    int i,Table,ans ;
    printf("Enter Table Number : ");
    scanf("%d", &Table);
    printf("\t'Table of %d is'\n\n",Table);
    for (i = 0; i <= 10; i++)
    {
        
        ans = Table * i;
        
        printf("\t \n%d * %d = %d",Table,i,ans);

    }
}