// Encapsulation in cpp

#include<iostream>
using namespace std;
class capsual
{
    int id;
    string name;

    public :

        int get()
        {
            cout<<"Enter Your Id : ";
            cin>>id;
            cout<<"Enter Your Name : ";
            cin>>name;

            return 0;
        };

        int show()
        {
            cout<<name<<" Your id is : "<<id;

            return 0;
        };

};

int main()
{
    capsual cap;
    cap.get();
    cap.show();
};