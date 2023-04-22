// Multi level Inherence

#include<iostream>
using namespace std;
class A
{
    public : 
        int a()
        {
            cout<<"This is Class A\n";
            return 0;
        }
};

class B
{
    public :
        int b()
        {
            cout<<"This is Class B\n";
            return 0;       
        }
};

class child : public A ,public B
{
    public : 
        int c()
        {
            cout<<"This is child class";
            return 0;
        }
};

int main()
{
    child c1;

    c1.a();
    c1.b();
    c1.c();
    return 0;

}
