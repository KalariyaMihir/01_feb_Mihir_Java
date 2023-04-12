// WAP to print Fibonacci series up to given numbers

#include <stdio.h>
void main()
{
    int number, n1 = 0, n2 = 1, n3;
    
    // to pass message to user 
    printf("Enter Number to create Fibonacci Series : ");
    // to store given number
    scanf("%d", &number);

    // create loop for fibonacci series 
    for (int i = 0; i < number; i++)
    {
        // to print numbers  
        printf("%d, ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
}