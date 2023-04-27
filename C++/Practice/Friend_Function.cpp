// Practice of Friend function 

#include<iostream>
using namespace std;
 class  Friend
 {
    char no[20];

    public :
        // &frnd is dummy object 
        friend int data(Friend &frnd);
 };

 int data(Friend &frnd)
 {
    cout<<"What is Your Name ? ";
    cin>>frnd.no;
    cout<<"\n Nice to meet you "<<frnd.no;
    return 0;
 }

 int main()
 {
    Friend obj;
    data(obj);
    return 0;
 }