// WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{

    // char datatype for string
    char input[30], reverse[30];

    // to pass message to user
    printf("Enter Word/Line here to check Palindrome or not :");
    // to store value
    scanf("%s", &input);
    
    // for copy string in other variable
    strcpy(reverse, input);

    // for reverse the string 
    strrev(reverse);

    // if else for compare the entered value from user using equals to condition 
    if (strcmp(input, reverse) == 0)
    {
        printf("%s is palindrome",input);
    }
    else
    {
        printf("%s is not palindrome",input);
    }
}