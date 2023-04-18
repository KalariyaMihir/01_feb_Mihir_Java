// Scope - Resolution In C++

#include<iostream>
using namespace std;

// VAriable in Global Section 
int no = 100;

int main()
{
    int no = 100;

    cout<<"Value of local Variable is :"<< no ;
    
    // if Global and local VAriable has same name and format  -- :: -- used to print Global variable 

    cout<<"\n\nValue of Global Variable is :"<< ::no;

    return 0;
}
