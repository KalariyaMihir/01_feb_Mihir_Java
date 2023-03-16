// Take any type of input from user and find the type of input
#include<stdio.h>
int main()
{
    char type;
    printf("Enter something that you want to find input type : ");
    scanf("%c",&type);
    if( type >=48 &&  type <=57)
    {
        printf("'Your input type is Numbers' :%c",type);
    }
    else if (type>=65 && type<=90 )
    {
        printf("'Your input type is Upper case ALPHABET' :%c",type);
    }
    else if (type >=97 && type<=122 )
    {
        printf("'Your input type is Lower case alphabet' :%c",type);
    
    }
    else
    {
     printf("'Your input type is Special Charater'");
     
    }
    
}