// Wap to print user name and user id 

#include<stdio.h>
void input(char a[20],char b[30])
{
    printf("Your User is: %s",a);
    printf("\nYour User id is :%s",b);
}
void main()
{
    char x[20],y[30];
    printf("Enter Your Username :");
    scanf("%s",&x);
    printf("Enter Your ID :");
    scanf("%s",&y);
    input(x,y);
}