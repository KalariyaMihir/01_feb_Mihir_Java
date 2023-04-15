// WAP to make addition, Subtraction and multiplication of two matrix using 3-D Array

#include <stdio.h>
int main()
{
    int number1[3][3], number2[3][3], number3[3][3];
    int i, j;

    // First Matrix -->

    printf("First Matrix Values\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Values %d%d : ", i, j);
            scanf("%d", &number1[i][j]);
        }
    }

    // second matrix -->

    printf("Second Matrix Values\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter Values %d%d : ", i, j);
            scanf("%d", &number2[i][j]);
        }
    }

    // -------
    // First matrix print

    printf("\tFirst Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", number2[i][j]);
        }
        printf(" \n");
    }

    // -------
    // second matrix print

    printf("\tSecond Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", number2[i][j]);
        }
        printf(" \n");
    }

    // -------
    // sum of 2 matrix

    printf("\tAddition of 2 Matrix is :\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            number3[i][j] = number1[i][j] + number2[i][j];
            printf("%d  ", number3[i][j]);
        }

        printf(" \n");
    }

    // -------
    // Substration of 2 Matrix

    printf("\tSubtraction of 2 Matrix is :\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            number3[i][j] = number1[i][j] - number2[i][j];
            printf("%d  ", number3[i][j]);
        }

        printf(" \n");
    }

    // --------
    // Multiplication of 2 Matrix

    printf("\tMultiplication of 2 Matrix is :\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            number3[i][j] = number1[i][j] * number2[i][j];
            printf("%d  ", number3[i][j]);
        }

        printf(" \n");
    }

    // -------
    // Division of 2 Matrix

    printf("\tDivision of 2 Matrix is :\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            number3[i][j] = number1[i][j] / number2[i][j];
            printf("%d  ", number3[i][j]);
        }

        printf(" \n");
    }
}