// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

// Declared class Matrix here 
class Matrix
{
public:
    
        int number[3][3], Number[3][3], add[3][3];
        int i, j;

    // fm function for first matrix
    int fm()
    {   
        // outer loop for raw 
        for (i = 0; i < 3; i++)
        {
            // inner loop is for colum
            for (j = 0; j < 3; j++)
            {
                cout << "Enter Values First Matrix " << i << j << " : ";
                cin >> number[i][j];
            }
        }

        return 0;
    }

    

    // sm function for second matrix
    int Sm()
    {

        cout<<endl<<"     ------     "<<endl;
        // outer loop for raw 
        for ( i = 0; i < 3; i++)
        {
            // inner loop for colum
            for ( j = 0; j < 3; j++)
            {
                cout<<"Enter Value of Second Matrix "<<i << j <<" : ";
                cin>> Number[i][j];
            }
            
        }

        
        return 0;

    }

    // this function is for addition of both matrix
    void operator + (Matrix &obj)
    {
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3 ; j++)
            {
                // formula of addition
                add[i][j] = number[i][j] + obj.Number[i][j];
            }
        }
    }

    // show function for show the addition of matrix
    int show()
    {
        cout<<endl<<"     -----     ";
        cout <<endl<<"\nAddition of First & Second Matrix is : \n";
        for(i = 0;i < 3; i ++)
        {
            for(j=0; j < 3; j++)
            {
                cout<< add[i][j]<<" ";
            }
            cout << endl;
        }
    }


};

int main()
{

    // 2 objects for read the values of function
    Matrix obj1,obj2;
    obj1.fm();
    obj2.Sm();
    obj1 + obj2;
    obj1.show();
    return 0;
}


