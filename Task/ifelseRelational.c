// if else program <,>,<=,>=,==,!=
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter Two Values:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf(" A is Bigger ");
    }

    else
    {
        printf(" B is Bigger ");
    }

    if (a<b)
    {
        printf("\n A is small");
    }
    else 
    {
    printf("\nB is Small");
    }
    if(a<=b)
    {
        printf("\nA is Less then Equal");
    }
    else
    {
        printf("\nB is less then Equal");
    }
    if (a>=b)
    {
     printf("\nA is Greater then Equal");
    }
    else
    {
        printf("\nB is Greater then Equal");
    }
    if (a==b)
    {
        printf("\nBoth are Equals");
    }
    else
    {
        printf("\nBoth are not Equals");
    }
    if (a!=b)
    {
        printf("\nBoth are Not Equals");
    }
    else
    {
        printf("\nBoth are Equals");
    }
}
