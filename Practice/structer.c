// WAP to Create a Structure

#include<stdio.h>
// Write Structure 
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