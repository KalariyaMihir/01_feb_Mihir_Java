// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>
int main()
{
    int no, rev = 0, a;
     //no = 64728;
    printf("Enter Number :");
    scanf("%d",&no);
    while (no != 0)
    {
        a = no % 10;
        rev = rev * 10 + a;
        no /= 10;
    }
    printf("Reverse Number is : %d ", rev);
}
