// Code with with returntype or with parameter

#include <stdio.h>
int sub(int a, int b)
{
    return a-b;
}
int main()
{
    int x,y;
    printf("Enter the value of X :");
    scanf("%d",&x);
    printf("Enter the value of y :");
    scanf("%d",&y);
    printf("%d",sub(x,y));
    return 0;
}