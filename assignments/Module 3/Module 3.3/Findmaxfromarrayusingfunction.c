#include <stdio.h>
#include <math.h>

int main() 
{
    int n[10];
    
    // loop for get Values
    for(int i = 0; i<= 9; i++)
    {
        printf("Enter number in index - %d : ",i);
        scanf("%d",&n[i]);
    }

    // loop for find max from given
    int max = n[0];
    for(int i = 0; i <= 9; i++)

    {

    // fmax function for find max
    max = fmax(max,n[i]);
    
    }
    
    // for print max number  
    printf("\nMaximum number from array is %d",max);
    return 0;
}

