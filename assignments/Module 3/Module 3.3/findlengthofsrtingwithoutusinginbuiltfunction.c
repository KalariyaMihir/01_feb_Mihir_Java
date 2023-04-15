// WAP Find out length of string without using inbuilt function

#include<stdio.h>
void main()
{
    char word[50];
    int i;
    
    // Pass Message to user for enter string
    printf("Enter Some Words : ");
    // store the entered value
    scanf("%s",&word);
    
    // loop for count the string
    for ( i = 0; word[i] != 0; i++); 

    // print The number of string
    printf("Length of %s is : %d Numbers",word,i);
}