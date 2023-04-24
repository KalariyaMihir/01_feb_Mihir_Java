// WAP to show Different between STRUCTURE & UNION


// Program of Structure

#include<stdio.h>
struct data
{
   int id;
   char name[20];
} st;

int main()
{
printf("Enter Your Name :  ");
scanf("%s",&st.name);
printf("Enter Your Id : ");
scanf("%d",&st.id);
printf("%s Your id is %d",st.name,st.id);
}

// Program of Union

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