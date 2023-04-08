// WAP to Create Structure Array
#include<stdio.h>
//Create Structure here
struct info
{
    int id;
    char name[20];
};
 int main()
 {
    struct info obj[20];

for (int i = 0; i < 3; i++)
{
    printf("Enter Your Name :");
    scanf("%s",&obj[i].name);
    printf("Enter Your id :");
    scanf("%d",&obj[i].id);
}
for (int i = 0; i < 3; i++)
{
    printf("\n%s Your id is : %d",obj[i].name,obj[i].id);
}

    
}