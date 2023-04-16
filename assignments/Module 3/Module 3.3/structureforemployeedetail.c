// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>

struct employeedata
{
    int empno,age;
    char empname[26],address[70];
};

int main()
{

    struct employeedata obj;

    printf("Enter Your Employee ID Number :");
    scanf("%d",&obj.empno); 

    printf("\nEnter Your Name :");
    scanf("%s",&obj.empname);

    printf("\nEnter Your Address :");
    scanf("%s",&obj.address);

    printf("\nEnter Your Age :");
    scanf("%d",&obj.age);

    printf("\t\t\t-- Your personal Details is -- \n");
    
    printf("\n --> Your ID is      : %d \v --> Your Name is    : %s \v --> Your Address is : %s \v --> Your Age is     : %d",obj.empno,obj.empname,obj.address,obj.age);    


}
