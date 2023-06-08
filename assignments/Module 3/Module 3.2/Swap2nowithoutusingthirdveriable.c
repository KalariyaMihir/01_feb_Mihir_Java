// Write a program to swap two numbers without using third variable
#include<stdio.h>

int a,b;

// void get() for Get the values from Users 
void get()
{
    printf("\nEnter First Value :");
    scanf("%d",&a);
    printf("\nEnter Second Value : ");
    scanf("%d",&b);
}

// Void print() for Calculate the values and print them 
void print()
{
    printf("\n \t%d + %d = %d",a,b,a+b);
    printf("\n \t%d - %d = %d",a,b,a-b);
    printf("\n \t%d / %d = %d",a,b,a/b);
    printf("\n \t%d * %d = %d",a,b,a*b);
    printf("\n \tIncrement of A : %d  ",++a);
    printf("\n \tDecrement of B : %d ",--b);

}

// main() to call both the function
int main()
{
    get();
    print();

    return 0;
}
