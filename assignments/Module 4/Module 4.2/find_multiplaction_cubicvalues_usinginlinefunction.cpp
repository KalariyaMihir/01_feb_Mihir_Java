// Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;

// inline function for multiplication
inline int multiplication(int a, int b)
{
    // formula for multiplication
    return a * b;
}

// inline function for cubic value
inline int cubic(int a)
{
    // formula to find cube of number
    return a * a * a;
}

int main()
{
    int a,b,ans,cube,cube1;

    cout<<"Enter First Value :";
    cin>>a;
    cout<<"Enter Second Value :";
    cin>>b;

    //int ans to to print ans of multiplication
    ans=multiplication(a,b);
    cout<<endl<<"Multiplication of "<<a<<" and "<<b<<" is : "<<ans;

    // int cube for find cube of first value 
    cube=cubic(a);

    //int cube1 for find cube of second value
    cube1=cubic(b);
    cout<<endl<<"Cube of "<<a<<" is : "<<cube;
    cout<<endl<<"Cube of "<<b<<" is : "<<cube1;

    return 0;
}