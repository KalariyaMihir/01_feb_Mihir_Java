// Write a program to concatenate the two strings using Operator Overloading


#include<iostream>
// string.h string function
#include<string.h>
using namespace std;

// Create a class name cat
class cat
{
    public :
        // cerate char for string value 
        char fn[10], ln[13];

    // addstring function for copying string
    void addstring(char s1[], char s2[])
    {
        strcpy(fn,s1);
        strcpy(ln,s2);

    }

    // operator+ concatenate string 
    void operator+()
        {
            cout<<"Your Full Name is : "<< strcat(fn,ln);
        }
};

int main()
{
      
    char s1[10],s2[13];
    // for get value from user
    cout<<"Enter Your \n\t - First Name : ";
    cin>>s1;
    cout<<"\n - Second Name : ";
    cin>>s2;

    // create obj object for cat class
    cat obj;
    obj.addstring(s1,s2);
    +obj;

    return 0;

}

