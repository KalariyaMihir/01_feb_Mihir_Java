// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>

//  Created a structure by name of employeedata 
struct employeedata
{
    int empno,age;
    char empname[26],address[70];
};

int main()
{
    // create "obj" object for structure 
    struct employeedata obj;

    // (printf- scanf) pass messages to user and store information given by user
    printf("Enter Your Employee ID Number :");
    scanf("%d",&obj.empno); 

    printf("\nEnter Your Name :");
    scanf("%s",&obj.empname);

    printf("\nEnter Your Address :");
    scanf("%s",&obj.address);

    printf("\nEnter Your Age :");
    scanf("%d",&obj.age);

    printf("\t\t\t-- Your personal Details is -- \n");

    // Print information that given by user     
    printf("\n --> Your ID is      : %d \v --> Your Name is    : %s \v --> Your Address is : %s \v --> Your Age is     : %d",obj.empno,obj.empname,obj.address,obj.age);    


}
