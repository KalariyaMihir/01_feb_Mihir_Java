// WAP to find reverse of string using recursion

#include<stdio.h>

void reversestring();
int main()
{
    printf("Enter Sentence for Reverse it : ");
    reversestring();
    return 0;
}

void reversestring()
{
    char string;

    scanf("%c",&string);
    if (string != '\n')
    {
        reversestring();
        printf("%c",string);
    }
    
}
