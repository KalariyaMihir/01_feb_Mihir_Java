// Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

// Create class name find  
class Find

    {
        public:

        // Create class ember a,b
        int a,b;

        // friend function name max-+
         friend int max(Find &comp);
    };
    
    // function for find max from given 
     int max(Find &comp)
        {
        cout<<"Enter First Value : ";
        cin>>comp.a;
        cout<<"\nEnter Second Value : ";
        cin>>comp.b;

        cout<<"  -----  ";
        // used if else condition to find max
        if(comp.a > comp.b)
        {
            cout<<endl<<comp.a<<" is Max";
        }
        else
        {
            cout<<endl<<comp.b<<" is Max";
        }
        return 0;

        }


int main()
{
    
    // create obj object of Find class
    Find obj;
    max(obj);
    

    return 0;
}
