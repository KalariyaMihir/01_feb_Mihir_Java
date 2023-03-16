// this program is to find max number for 3 using turnery operator
#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter First Value : ");
    scanf("%d", &a);
    printf("Enter Second Value : ");
    scanf("%d", &b);
    printf("Enter Third Value : ");
    scanf("%d", &c);
    // max = (a>b)?(a>c ? a:c) : (b>c ? b:c);
    (a > b) ? ((a > c) ? (printf("\nA is max.")) : printf("\nC is max.")) : ( (b > c) ? printf("\nB is max.") : printf("\nc is max."));
    printf("Max no is%d",max);  
}