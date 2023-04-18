// This operator in c++

#include<iostream>
using namespace std;

class This
{
    public : 
        
        int no = 100;
        
        int data()
        {
            int no = 10;    
            cout<<"Value of Local Variable is :"<<no;
            cout<<"\n\nValue of data Member is :"<< this->no;
            return 0;
        }
};

int main()
{
    This obj;
    obj.data();
    return 0;
}
