//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main()
{
    int n,i;
    long int fact = 1;
    
    // Pass message to  enter number for find factorial
    printf("Enter Numbers : ");
    // to store the given number
    scanf("%d",&n);
    
    // Multiplication of the given number in loop 
    for ( i = 1 ; i < n ; i++)
    {
        fact *= i;
    }
    
    // To pass Factorial of given Number to user 
    printf("\nFactorial of %d is : %ld",n,fact);

    return 0;

       
}