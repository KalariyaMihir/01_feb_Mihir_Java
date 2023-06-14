/*Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number.
 Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test.
The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include<iostream>
using namespace std;

// Create Class Student
class student
{
    public : 
    int roll_no;
    string name;

        // roll function for enter students  roll no 
        void roll()
        {
        
        cout<<"Enter Students Name : ";
        cin>> name;
        cout<<"Enter Students Roll No. :";
        cin>> roll_no;
        }
};

// class test derived from class student
class Test : public student
{
    public:

        // 8 variables for 8 mark input
        int t1,t2,t3,t4,t5,t6,t7,t8;
        int pr ;

        // test function for get the test mark of student
        void test()
        {
            cout<<"Enter The Test Marks of - Gujarati : ";
            cin>>t1;
            cout<<"\t\t        - Hindi    : ";
            cin>>t2;
            cout<<"\t\t        - S.S      : ";
            cin>>t3;
            cout<<"\t\t        - science  : ";
            cin>>t4;
            cout<<"\t\t        - Maths    : ";
            cin>>t5;
            cout<<"\t\t        - Sanskrit : ";
            cin>>t6;
            cout<<"\t\t        - Computer : ";
            cin>>t7;
            cout<<"\t\t        - Drawing  : ";
            cin>>t8;


        }
};

// class Result derived from class test
class Result : public Test 
{
    public :
        // result function for show the total marks of subjects
        void result()
        {

            cout<<endl<<"---------------------------------------------------------------------------------------------------------------------------------------------------------";

            cout<<endl<<"\n\t\t\t\t\t\t ------> Roll no."<<roll_no<<" "<<name<<"'s Total Mark is : "<<t1+t2+t3+t4+t5+t6+t7+t8<<" <------ ";
            
            cout<<endl<<"\n---------------------------------------------------------------------------------------------------------------------------------------------------------";

        }
};

int main()
{
    // give obj object to class Result  
    Result obj;
    obj.roll();
    obj.test();
    obj.result();

    return 0;
}
