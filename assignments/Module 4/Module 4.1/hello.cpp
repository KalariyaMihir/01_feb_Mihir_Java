// WAP to Get Value & print in c++

#include<iostream>
using namespace std;
int main()
{

    // String for name
    char name[20];  
    int no;

    //cout used for print message 
    cout<< "Enter Your Name :";
    // cin used for store / get data from user 
    cin>>name;
    cout<<" Enter Your ID : ";
    cin>>no;
    cout<< name<<" your id is " <<no ;

    return 0;
}