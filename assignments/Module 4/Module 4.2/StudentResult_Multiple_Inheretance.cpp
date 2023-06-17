// /*Create a class person having members name and age. Derive a class student having member percentage.
//   Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. 
//   Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

// Create a class name Person  
class Person
{
    
    public :

        // having member age, name 
        int age;
        string name;
     
        // void get() for get the information from user
        void get()
        {
            cout<<"\n\n\t\t\tEnter Name : ";
            cin>> name;
            cout<<"\t\t\tEnter Age : ";
            cin>> age;
        }

        // void show() for print users info 
        void show()
        {
            cout<<"\n\n\t\t\tName :- "<<name;
            cout<<"\n\t\t\tAge  :- "<<age;

        }
};

// inherent class Student from person for Get , Print the students data
class Student : public Person 
{
 
    public :

        // member pr for Percentage
         float pr;
        
        // void gett() for get the students details
         void gett()
         {
            
            // call get() for get info 
            get();
            cout<<"\t\t\tEnter Percentage : ";
            cin>>pr;
         }

        // void gett() for print the students details
         void showw()
         {

            // call show() for print info
            show();
            cout<<"\n\t\t\tPercentage of "<<name<<" is : "<<pr;
         }

};

// inherent class Teacher from person for get, print the teachers data 
class Teacher : public Person
{
    public : 

        // member Salary for salary 
        int Salary;

        // void Gettt() for get the info 
        void Gettt()
        {
            // call get() from Person for get the info 
            get();
            cout<<"\t\t\tEnter Teacher Salary : ";
            cin>>Salary;
        }

        // void Showww() for print the info
        void Showww()
        {
            // Call show from person for show the info
            show();
            cout<<"\n\t\t\tTeacher's Salary is : "<<Salary;
        }
};


int main()
{
    // create object of class Student -> st, Teacher -> te
    Student st;
    Teacher te;

    // for get students info by calling gett()
    cout<<"\n\t\t\t--------------------------------------------------";
    cout<<"\n\n\t\t\t\t --- Enter Student's Details ---";
    st.gett();

    // for get teachers info by calling Gettt()
    cout<<"\n\t\t\t--------------------------------------------------";
    cout<<"\n\n\t\t\t\t --- Enter Teacher's Details ---";
    te.Gettt();

    // for print students info calling showw()
    cout<<"\n\t\t\t<-<-<-<-<-<-<-<-<-<-<-------->->->->->->->->->->->";
    cout<<"\n\n\t\t\t\t  --- Student's Information ---";
    st.showw();

    // for print teachers info by calling Showww()
    cout<<"\n\n\t\t\t<-<-<-<-<-<-<-<-<-<-<-------->->->->->->->->->->->";
    cout<<"\n\n\t\t\t\t  --- Teacher's Information ---";
    te.Showww();

    return 0;
}


