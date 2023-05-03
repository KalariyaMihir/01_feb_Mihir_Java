/* Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
     Rectangle: Area * breadth
     Triangle: ½ *Area* breadth
     Circle: Pi * Area *Area
*/

#include<iostream>
using namespace std;

class Findarea
{
    public:

        // Function Overloading Same name Different parameter 

        // first function with para. l,w for find the area of rectangle
        int Area(int l, int w)
            {

                // for Print the area 
                cout<<"Area of Rectangle is      : "<<l*w;  
                cout<<endl<<"\n      --------      "<<endl;
             
                return 0;

            };
        
        // second function with para h,b and c is for for the area of triangle 
        int Area(int h,int b,int c)
            {


                // for print the area
                cout<<"Area of Triangle is     : "<<h*b/c;
                cout<<"\n\n      --------      "<<endl;
                return 0;          
            };

        // third fuction with para r is for find the area of circle
        int Area(int r)
            {

                // for print the area
                cout<<"Area of Circle is      : "<<3.14159265359*r*r;
                cout<<"\n\n      --------      ";
                return 0;
            };
};

int  main()
{

    // created obj object for class findarea
    Findarea obj;
    
    // this is for rectangle
    int l,w;
    cout<<endl<<"Enter Length of Rectangle : ";
    cin>>l;
    cout<<"Enter Width of Rectangle  : ";
    cin>>w;
    // pass value to parameters of l,w of Area() function
    obj.Area(l,w);

    // This is for triangle
    int h,d,c=2;
    cout<<endl<<"Enter Hight of Triangle : ";
    cin>>h;
    cout<<"Enter Base of Triangle  : ";
    cin>>d;
    // pass value to parameters of h,b,c of Area() function
    obj.Area(h,d,c);

    // this is for circle
    int r;
    cout<<endl<<"Enter Radius Of Circle : ";
    cin>>r;
    // // pass value to parameters of r of Area() function
    obj.Area(r);

    return 0;
}
