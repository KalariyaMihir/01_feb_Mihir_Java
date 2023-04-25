// Practice of Operator Overloading

#include<iostream>
using namespace std;
class Operator
{
    public :
        int a;
        int mul()
        {
            cout<<"Enter The Value of A : ";
            cin>>a;
            return 0;
        }

        Operator operator--()
        {
            a--;
        }

        void show()
        {
            cout<<"\nValue of a is :"<<a;
        }
};

int main()
{
    Operator obj;
    obj.mul();
    --obj;
    obj.show();
    return 0;
}