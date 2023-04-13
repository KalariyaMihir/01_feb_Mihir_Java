// WAP Find out length of string without using inbuilt function

#include<stdio.h>
void main()
{
    char word[50];
    int i;
    
    printf("Enter Some Words : ");
    scanf("%s",&word);

    for ( i = 0; word[i] != '\0'; i++);
    {
        
    }
      printf("Length of %s is : %d ",word,i);
}