// WAP for Class

#include <iostream>
using namespace std;
class stdata
{
    string name;
    int id;

private:
    int show()
    {
        cout << "Enter Your Name :";
        cin >> name;
        cout << endl<< "Enter Your Id here :";
        cin >> id;
    }
public :
    int print()
    {
        cout << endl<< name << " your Id is : " << id;
    };
};


int main()
{
    stdata object;

    object.show();
    object.print();
}