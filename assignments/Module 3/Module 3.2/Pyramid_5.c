/*
WAP to Print :           *
                       * * *
                     * * * * *
                   * * * * * * *
                 * * * * * * * * *
               * * * * * * * * * * *


*/

#include <stdio.h>
int main()
{
  int i, j, k = 0, rows;

  printf("Enter Number of Rows : ");
  scanf("%d", &rows);

  for (i = 0; i < rows; i++, k = 0)
  {
    for (j = 1; j <= rows - i; j++)
    {
      printf("  ");
    }
    for (j = 0; j <= i; j++)
    {
      printf("* ");
    }
    for (j = 0; j <= i - 1; j++)
    {
      printf("* ");
    }

    {
      printf("\n");
      k++;
    }
  }
}
