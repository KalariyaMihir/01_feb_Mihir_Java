// Goto Statement in loop Practice
#include<stdio.h>
int main()
{
    int i;
    int flag = 0 ,no;
    printf("Enter Number to check Number is Prime or not Prime : ");
    scanf("%d",&no);
    for ( i = 2; i  < no; i++)
    {
        if (no% i == 0)
        {
            flag = 1;
            goto prime;
        }
        
    }
    prime:
    if (flag == 0)
    {
        printf("%dis Prime Number",no);
    }
    else
    printf("%d is Not prime",no);

}