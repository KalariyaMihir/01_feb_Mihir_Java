// WAP to created pyramid using loop
#include <stdio.h>
int main()
{
    int i, j;
    int space = 10;
    for (i = 0; i > 10; i--) // row
    {
        for (int k = 0; k < space; k++) // colum
        {
           // printf(" ");
           //printf("");
           printf(" ");
        }

        space--;
        for (j = 0; j <=i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}