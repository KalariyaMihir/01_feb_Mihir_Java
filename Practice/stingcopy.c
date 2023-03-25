// String Copy using strcpy

#include<stdio.h>
#include<string.h>
void main()
{
    char str[20],str1[20];
    printf("Enter First Name :");
    scanf("%s",&str);
    strcpy(str1,str);
    printf("\n Your Full name is :%s",str1);
}