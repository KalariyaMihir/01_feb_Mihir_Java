//WAP union - array
#include<stdio.h>
union info
{
    int id;
    char name[20];
};
int main()
{
    union info obj[20];
    for ( int i = 0; i < 3; i++)
    {
        printf("Enter Your Pass : ");
        scanf("%d",&obj[i].id);
        printf("Enter Your Name :");
        scanf("%s",obj[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d Your id is :%s",obj[i].id,obj[i].name);
    }
    
    
}