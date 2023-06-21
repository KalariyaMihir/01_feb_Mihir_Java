 /* Create a Project to demonstrate an Event Organizer Project which will help to manage the Events.
    The Project should contain all the necessary requirements i.e need to use conditional Statements, Loops, Function and 
    also A Program should use the concept of OOP.*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

class Info
{
    public :

    int guest, time, servent ; 
    string event, fn, ln;
    string c;

    // get() for get all the required details from user for their event
    int get()
    {
        do
        {
        cout<<"\nEnter the name of Event : ";
        cin>>event;

        cout<<"Enter Your First Name : ";
        cin>>fn;
        cout<<"Enter Your Last Name : ";
        cin>>ln;

        cout<<"Enter Number of Your Guests : ";
        cin>>guest;

        cout<<"How much Time(in Minute) Your event will take ? ";
        cin>>time;

        cout<<"\nGiven Detail's are corrected ? ";
        cout<<endl<<"Press Y for Yes / Press N for No "<<endl;
        cin>>c;
        }
        while(c == "N" || c == "n");

        return 0;        
    };

};

class cal : public Info
{
    public :

    float cost_of_one_servent, cost1, cost2, total_servent_cost;

    // this member are for food cost-->
     float total_food_cost,average_cost_per_person;
    
    // member for event cost-->
    float total_cost, dp_amount;

    int count()
    {

        cout<<"\n\n\t\t\t\t\t\t\t<--------------------- "<<fn<<" "<<ln<<" Event Estimate of your "<<event<<" --------------------->\n\n";


        // calculation of servent cost
        //  1 servent can serve 20 guest = guest / 20
        servent = ceil(static_cast<double>(guest) / 20);
        cout<<endl<<"Servants Required for your Event : "<<servent;

        cost1 = (time / 60) * CostPerHour;
        cost2 = (time % 60) * CostPerMinute;
        cost_of_one_servent = cost1+cost2;
        cout<<endl<<"cost per each Servent is         : "<<cost_of_one_servent<<"$";

        // total cost of servants
        total_servent_cost = cost_of_one_servent * servent;
        cout<<endl<<"Total cost of "<<servent<<" Servent is\t : "<<total_servent_cost<<"$";

        // calculation of food cost 
        total_food_cost = guest * CostOfDinner;
        cout<<endl<<"Total cost food is\t\t : "<<total_food_cost<<"$";

        // Average cost per person 
        average_cost_per_person =  total_food_cost / guest;
        cout<<endl<<"Average Cost Per Person is\t : "<<average_cost_per_person<<"$";

        // total cost of event 
        total_cost = total_food_cost + total_servent_cost;
        cout<<endl<<"Total cost of Your Event is\t : "<<total_cost<<"$";

        // deposit amount
        dp_amount = total_cost * .25;
        cout<<endl<<endl<<fn<<" "<<ln<<" for Confirm the event you have to deposit 25% of the total : "<<dp_amount<<"$";

        cout<<"\n\n\n\t\t\t\t\t ****************************************** Thank You For Visiting Us ******************************************";



        


        return 0;
    }
};


int main()

{    
    cout<<"\n\n\t\t\t\t\t\t***************************** Welcome to Tops Event Management *****************************";
    cal c;


    c.get();
    c.count();
    return 0;

}