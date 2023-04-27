// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

// here Arithmetic is class 
class Arithmetic
{
    int a,b;    

    public:

    // Arithmetic is Constructor here with parameter v1 / v2
    Arithmetic(int v1 ,int v2)
    {
        a = v1;
        b = v2;
    }

    // add function for Addition
    int add()
    {
        return a + b;
    }

    // sub function for subtraction
    int sub()
    {
        return a - b;
    }        

    // mul function for multiplication
    int mul()
    {
        return a * b;
    }

    // div function for division
    int div()
    {
        return a / b; 
    } 
};

int main()
{
    // Value of a and b is go to class member a and b
    int a,b;

    cout<<"Enter First Value : ";
    cin>>a;
    cout<<"Enter Second Value : ";
    cin>>b;

    // for print ans of calculation calc is object
    Arithmetic calc(a,b);

    // print answers of calculations 
    cout<<"Addition "<<a<<" and "<<b<<" is       : "<<calc.add()<<endl;
    cout<<"Subtraction "<<a<<" and "<<b<<" is    : "<<calc.sub()<<endl;
    cout<<"Multiplication "<<a<<" and "<<b<<" is : "<<calc.mul()<<endl;
    cout<<"Division "<<a<<" and "<<b<<" is       : "<<calc.div()<<endl;


    return 0;
}