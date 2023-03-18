// Loop Continue Practice
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <=20; i++)
    {
    
        if (i == 5 || i == 10 || i == 15 || i ==20  )
        {
            continue;
        }
        
        printf("%d\t",i);
    }
    
}