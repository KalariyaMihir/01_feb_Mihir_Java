#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    printf("Enter your name : ");
    scanf("%s", &name);
    int length;
    length = strlen(name);
    for (int i = length; i >= 0; i--)
    {
        printf("%c",name[i]);
    }
    int j = 0;
    for (int i = length; i >= 1; i--)
    {
        j++;
    }
    printf("\n%d",j);
    
}