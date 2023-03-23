// WAP to Program to Show Metrics

#include <stdio.h>
int main()
{
    int number[3][3]; //= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Values %d%d : ",i,j);
            scanf("%d", &number[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" %d",number[i][j]);
        }
        printf("\n");
    }
    
}
