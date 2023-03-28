//String concatenates using strcat

#include<stdio.h>
#include<string.h>
int main()
{
    char First[30],Middle[10],last[10];
    printf("Enter First Name: ");
    scanf("%s",&First);
    printf("Enter Second Name :");
    scanf("%s",&Middle);
    printf("Enter Last Name :");
    scanf("%s",&last);
    strcat (First,Middle);
    strcat(First,last);
    printf("\n Your Full Name is : %s",First);
}
