// Write a program of to swap the two values using templates

#include<iostream>
using namespace std;
// create template 
template <typename swap>

// Create class name Template 
class Template
{
    public :
         
        Template (swap a , swap b)
            {
                // swap Two Number without using third variable
                cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
            }
};

int main()
{
    // Create variable for scan value  
    int a,b;

    cout<<"Enter First Value : ";
    cin>>a;
    cout<<"Enter Second Value : ";
    cin>>b;

    // obj Object of Template class 
    Template <int> obj(a,b);

    return 0;
}