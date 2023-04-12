//WAP to Find Summation of Given Number

#include<stdio.h>
int main()
{
    int number,a,b;
    // Enter Number here for Summation 
    printf("Enter Number : ");
    scanf("%d",&number);
    b= 0;
    for ( int i = 1; number%10>0; i++)
    {
        a = number % 10;
        
        b = b+a;
        number = number/10;
        
    }
    printf("Summation Of Given number is : %d",b);
    return 0;
}
