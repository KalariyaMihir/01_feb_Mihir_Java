// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>

// Created a Structure by Name of employeedata
struct employeedata
{
    int id,age;
    char name[25], address[70];

};

int main()
{
    // Create "obj" object for structure
    struct employeedata obj[70];
     
    // Create loop for 5 employee data
    for (int i = 0; i < 5; i++)
    {

    // (printf- scanf) pass messages to user and store information given by user
    printf("\n----------");

    printf("\nEnter Your Employee ID Number :");
    scanf("%d",&obj[i].id); 

    printf("\nEnter Employee Name :");
    scanf("%s",&obj[i].name);

    printf("\nEnter Employee Address :");
    scanf("%s",&obj[i].address);

    printf("\nEnter Employee Age :");
    scanf("%d",&obj[i].age);

    }

    printf("\t\t\t-- Your Employee Details is -- \n");

    for (int i = 0; i < 5; i++)
    
    {

    // Print information that given by user     
    printf("\n --> Your ID is      : %d \v --> Your Name is    : %s \v --> Your Address is : %s \v --> Your Age is     : %d",obj[i].id,obj[i].name,obj[i].address,obj[i].age);    

    printf("\n----------");

    }
    
    
}