

#include <iostream>
using namespace std;

// Function for sort array of type T in ascending order 
template <typename T>
void sortArray(T arr[], int n) 
{

    // loop for scanning numbers 1 by 1
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                // used swap method for creating ascending order of numbers
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // loop for print the sorted numbers
    cout << "Ascending Numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        cout << ", ";
    }
    
}

int main()
 {
    // array for get 10 values
    int arr1[10];
    cout<<"Enter numbers :";
    
    // loop for get 10 different values 
    for (int i = 0; i < 10 ; i++)
    {
        cin>>arr1[i];
        
    }
     
    
    sortArray(arr1,10);
    //sortArray(arr2);

    return 0;
}

