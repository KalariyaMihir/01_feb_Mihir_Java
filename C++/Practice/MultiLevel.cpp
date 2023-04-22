//WAP Multilevel inheritance 

#include<iostream>
using namespace std;

class FirstLevel
{
    public :
        int a()
        {
            cout<<"\nThis is Grand Parent Class";
        }
};

class SecondLevel : public FirstLevel
{
    public : 
        int b()
        {
            cout<<"\nThis is Parent Class";
        }
};

class ThirdLevel : public SecondLevel
{
    public :
        int c()
        {
            cout<<"\nThis is Child Class";
        }
};

int main()
{
    ThirdLevel obj;

    obj.a();
    obj.b();
    obj.c();

    return 0;

}