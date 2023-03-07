//WAP to find simple interest
#include<stdio.h>
void main()
{
    float amount,time,irate;
    float interest;
    float ans;
    printf("Enter Amount:");
    scanf("%f",&amount);
    printf("\n Enter Years :");
    scanf("%f",&time);
    printf("\n Enter The Interest Rate :");
    scanf("%f",&irate);
    interest = (amount*time*irate)/(100);
    printf("\n Your Interest Amount is: %f",interest);
    ans=amount+interest;
    printf("\n\n Your Total Amount with Interest is :%f",ans);
}