// WAP to Create Simple Calculator using Class

#include<iostream>
using namespace std;

class Cal
{
    int a,b;

    public :
        
        // get function for get the value from user
        int Get()
        {
            //Pass Message to user and get value from them 
            cout<<"Enter First Value :";
            cin>>a;
            cout<<endl<<"Enter Second Value :";
            cin>>b;
            return 0;
        }

        // print Function for Print the Arithmetic operations

        int Print()
        {
            // for Print the Different Arithmetic operations
            cout<<"Addition of "<<a<<" and "<<b<<" is       : "<<a+b;
            cout<<endl<<"SuBtraction of "<<a<<" and "<<b<<" is    : "<<a-b;
            cout<<endl<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b;
            cout<<endl<<"Division of "<<a<<" and "<<b<<" is       : "<<a/b;
            return 0;
        }
};

int main()
{
    // Create class Cal's object name obj
    Cal obj;

    obj.Get();
    obj.Print();

    return 0;
}