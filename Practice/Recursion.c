// WAP TO Find Factorial Using Recursive Function

#include <stdio.h>
// Recursive Function
long int factorial(long int no)
{
    if (no < 1)
    {
        return 1;
    } 
    // fecto () method call it self
    return no * factorial (no -1);
    //for ex.5 * fecto (5 -1)
}
int main ()
{
    long int n;
    printf("Enter the Value of no :");
    scanf("%ld",&n);
    printf("%ld",factorial(n));
    return 0;
}