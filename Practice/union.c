// WAP Union

#include <stdio.h>
union info
{
    int pass;
    char name[20];
} object;

int main()
{
    printf("Enter Your Password :");
    scanf("%d",&object.pass);
    printf("Enter Your Name :");
    scanf("%s",&object.name);
    
    printf("%d Your Password is stored : %s ",object.pass,object.name);
}