/* Define a class to represent a bank account. Include the following members:
    1. Data Member:
        -Name of the depositor
        -Account Number
        -Type of Account
        -Balance amount in the account

    2. Member Functions:
        -To assign values
        -To deposited an amount
        -To withdraw an amount after checking balance
        -To display name and balance */

#include<iostream>
using namespace std;

class Bank_Account
{
    char DP_Name[30], AC_Type[8],ch;
    long int  AC_Number,Balance = 5000 ,add,min=0;

    public:
   
        // Assign Values
        void details()
        {
            // Get Account Details from user
            cout<<"\t\t -- Welcome To Our Bank-- "<<endl;
            cout<<"\nPlease fill up your Account Details";
            cout<<"\n\nEnter Your Name : ";
            cin>>DP_Name;
            cout<<endl<<"Enter your Account Number : ";
            cin>>AC_Number;
            cout<<endl<<"Which type of Account do you have Saving/Current ? ";
            cin>>AC_Type;
            cout<<endl<<"Your Account Balance is : "<<Balance<<" Rupees.";
            cout<<endl<<"\n                ---------- "<<endl;
          
        }


        // Deposit Amount
        void input()
        {
            // input function for Deposit money
            cout<<endl<<DP_Name<<" You Want to Deposit Money Y/N ? ";
            cin>>ch;

            // if else for give choice for deposit money or not
            if (ch == 'Y' || ch == 'y')
            {
                cout<<endl<<"Enter Amount That you want to Deposit :";
                cin>>add;
                Balance = Balance + add;
            } 
        }

        // Check & Withdraw Amount 
        void withdraw()
        {
            // Withdraw function for Withdraw amount
            cout<<endl<<"Your Account Balance is : "<<Balance<<" Rupees."<<endl;

            cout<<endl<<DP_Name<<" Do Yo want to Withdraw Money Y/N ? ";
            cin>>ch;

            // if for Give choice for withdraw money or not 
            if (ch == 'Y' || ch == 'y')
            {
                cout<<endl<<"How much Amount you want to withdraw ? ";
                cin>>min;
                    
                    // this if is for Check withdraw amount is less then balance
                    if (Balance < min)
                    {
                        cout<<"Sorry "<<DP_Name<<" you dont have Sufficient Balance in Your Account";   
                    }
                    else
                    {   
                        cout<<endl<<"You Withdraw "<<min<<" from "<<Balance<<endl;
                    }
            }
        } 


        void show()
        {
            // show function for Show the amount & name after process
            cout<<"\n               ---------- "<<endl;
            Balance = Balance - min;
            cout<<endl<<DP_Name<<" You have "<<Balance<<" in Your Account";

            cout<<"\n               ---------- "<<endl;
            cout<<"\t\t -- Thank You For visiting Our Site -- ";
        }     
};

int main()
{
    Bank_Account obj;
    obj.details();
    obj.input();
    obj.withdraw();
    obj.show();

    return 0;
}