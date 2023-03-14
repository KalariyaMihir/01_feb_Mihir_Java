#include <stdio.h>
int main()
{
    int a, b, calculation, ans;
    printf("\n\t Calculation That you can Perform in this calculator  ");
    printf("\n\n\t'1. Addition    \t+'\n\t'2. Substraction \t-'\n\t'3. Division     \t/'\n\t'4. Multiplaction \t*'");
    printf("\n\n Enter First Value :");
    scanf("%d", &a);
    printf("\n\n What would like to Perform :");
    scanf("%d", &calculation);
    printf("\n\n Enter Second Value :");
    scanf("%d", &b);

    switch (calculation)
    {
    case 1:
        printf("\n %d + %d = %d", a, b, a + b);
        break;

    case 2:
        printf("\n %d - %d = %d", a, b, a - b);
        break;

    case 3:
        printf("\n %d / %d = %d", a, b, a / b);
        break;

    case 4:
        printf("\n %d * %d = %d", a, b, a * b);
        break;

    default:
        printf("\n Sorry That Action is Not Available");
        printf("\n Sorry For Inconvenience");
        break;
    }
}