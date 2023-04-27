// Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include<iostream>
using namespace std;

class Calculation
{
    public:

        // different functions for different calculations & parameters 
        void addition(int a, int b,int c )
        {
            cout<<"Addition of "<<a<<","<<b<<" and "<<c<<" is        : "<<a+b+c;
        }

        void subtraction(int a,int b)
        {
            cout<<endl<<"Subtraction of "<<a<<" and "<<a<<" is       : "<<a-b;
        }

        void mul(float a, float b, float c)
        {
            cout<<endl<<"Multiplication of "<<a<<","<<b<<" and "<<c<<" is  : "<<a*b*c;
        }

        void div(float a, float b)
        {
            cout<<endl<<"Division of "<<a<<" and "<<b<<" is          : "<<a/b;
        }
};
int main()
{
    // obj is object of class
    Calculation obj;

    int a,b,c;
    float A,B,C;

    // to enter integer value
    cout<<"Enter First Value : ";
    cin>>a;
    cout<<endl<<"Enter Second value : ";
    cin>>b;
    cout<<endl<<"Enter Third value : ";
    cin>>c;

    cout<<"   ------   ";

    // to enter float value
    cout<<endl<<"Enter First Float Value : ";
    cin>>A;
    cout<<endl<<"Enter Second Float value : ";
    cin>>B;
    cout<<endl<<"Enter Third Value : ";
    cin>>C;

    // sends value to class member
    obj.addition(a,b,c);
    obj.subtraction(a,b);
    obj.mul(A,B,C);
    obj.div(A,B);

    return 0;
}