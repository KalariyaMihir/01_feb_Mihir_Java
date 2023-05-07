/* Assume a class cricketer is declared. Declare a derived class batsman from cricketer.
   Data member of batsman. Total runs, Average runs and best performance. Member functions
   input data, calculate average runs, Display data. (Single Inheritance)*/

   #include<iostream>
   using namespace std;
   // created class cricketer
   class cricketer
   {
      public :
         int  totalruns , bestperformance,matches, averageruns;
         char name[10];

         // input all details in function data() 
         void data()
            {
               cout<<"Enter Cricketers name : ";
               cin>>name;
               cout<<"\nEnter Total Runs of "<<name<<" : ";
               cin>>totalruns;
               cout<<"\nHow Many Matches "<<name<<" Played ? ";
               cin>>matches;

                      
            }   

            //  formula to Calculate average run 
            void average()
            {
               averageruns = totalruns / matches;

               
            }
   };

   // class batsman derived from class cricketer 
   class batsman : public  cricketer
   {
      public: 
         
            // void function for show all data of cricketer
            void show()
            {

               cout<<endl<<"Name of Cricketer is : "<<name<<endl;
               cout<<"Total run of "<<name<<" is "<<totalruns<<endl;
               cout<<name<<" Played Total "<<matches<<" Matches in his Career."<<endl;
               cout<<"And Average runs of "<<name<<" is "<<averageruns;
            }      
   };
int main()
{
   // give obj objects to batsman class 
   batsman obj;
   obj.data();
   obj.average();
   obj.show();

   return 0;
}