#include<stdio.h>
int main()
{
    int i,j,rows,count = 65;
    printf("How Many Rows You Want ? ");
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%c ",count);
            count ++;

        }
        printf("\n");
    }
    
}

