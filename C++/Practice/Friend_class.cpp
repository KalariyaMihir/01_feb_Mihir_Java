// Practice of Friend class 

#include<iostream>
using namespace std;
class Friend
{
    int a;

    public: 
        friend class Temp ;

};

class Temp
{
    public :
        // Here obj is " Dummy object "
        void data(Friend &obj)

        {
        cout<<"Enter The Value of A :";
        cin>> obj.a;
        cout<<"Value of A is "<<obj.a ;
        }
};

int main()
{
    Friend F1;
    Temp T1;
    T1.data(F1);

    return 0;
}