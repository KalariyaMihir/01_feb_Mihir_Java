//Loop Break Practice
#include<stdio.h>
int main()
{
    int i;
    for ( i = 10; i >0; i--)
    {
       if (i == 0)
       {
        break;
       }
       
    printf("%d",i);
    }
    
    return 0;
}