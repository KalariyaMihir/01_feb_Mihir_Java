// String Reverse using strrev

#include<stdio.h>
#include<String.h>
int main()
{
    char word[15];
    printf ("Enter Word That you Want to Reverse \n");
    scanf("%s",&word);
    strrev(word);
    printf("Your Reverse Word is\n %s",word);
}