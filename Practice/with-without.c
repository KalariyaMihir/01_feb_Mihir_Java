// code with With Returntype or without parameter

#include <stdio.h>
int no;
int getdata()
{
    printf("Enter The Value :");
    scanf("%d",&no);
    return 0;
}
int show()
{
    return no;
}
int main()
{
    getdata();
    printf("%d", show());
    return 0;
}