// WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()
{
    int no;
    printf("Enter Number :");
    scanf("%d",&no);
    (no % 2 == 0) ? (printf("Given Number is Even")) : (printf("Given Number is Odd"));
}