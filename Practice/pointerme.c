#include<stdio.h>
void main()
{
    int a,b;
    int *ptr1,*ptr2;
    ptr1 = &a;
    printf("\n Address of a is :%d ",ptr1);
    *ptr1 = 657;
    ++*ptr1;
    printf("\n Value of a is : %d",a);
    ptr2 = &b;
    *ptr2 = 959;
    --*ptr2;
    printf("\n Address of b is :%d",ptr2);
    printf("\n Address of b is :%d",b);
}