// WAP to find Monday to Sunday using Switch Case
#include <stdio.h>
int main()
{
    int days;
    printf(" \n 1.Sunday \n 2.Monday \n 3.Tuesday \n 4.Wednesday \n 5.Thursday \n 6.Friday \n 7.Saturday");
    printf("\n\n\nEnter Day : ");
    scanf("%d",&days);
    switch (days)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("There is No Such Day is Finned Till Now");
         break;
    }
}