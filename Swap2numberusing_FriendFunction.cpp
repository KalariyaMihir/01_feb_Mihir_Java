// Write a program to swap the two numbers using Number function without using third variable

#include<iostream>
using namespace std;

// created class name Number
class Number
{
    public:
    //2 member for addition
    int a,b;

    public :
        // create class add that takes a reference to a Number object(num) as its parameter
        friend void add(Number& num);
        
};

// define the add function that takes a reference to a Number object as its parameter
void add(Number& num)
    {
        cout<<"Enter First Number : ";
        cin>>num.a;
        cout<<"Enter Second Value : ";
        cin>>num.b;

        cout<<"Addition of "<<num.a<<" and "<<num.b<<" is : "<<num.a + num.b;
            
    }

int main()
    {
        // create object of number 
        Number obj;
        // call the add function and pass the Number object as its parameter
        add (obj);
    }
