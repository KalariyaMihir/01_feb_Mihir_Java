// Hybrid inheritance 

#include<iostream>
using namespace std;

class A
{
    public :
        A()
        {
            cout<<"This is Class A"; 
        }
};

class B : public virtual A
{
    public: 
        B()
        {
            cout<<"\nThis is Class B";
        }
};

class C : public virtual B
{
    public :
        C()
        {
            cout<<"\nThis is Class C";
        }
};

class D : public virtual C
{
    public :
        D()
        {
            cout<<"\nThis is Class D";

        }
};

int main()
{
    D obj;

    return 0;
}