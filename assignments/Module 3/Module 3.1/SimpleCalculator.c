// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
void main()
{
    int a,b;
    int ans;
    float div;
    printf("Enter Two Value:");
    scanf("%d%d",&a,&b);
    ans=a+b;
    printf("Addition of Two Numbers is :       %d",ans);
    ans=a-b;
    printf("\n\nSubstration of Two Numbers is :    %d",ans);
    ans=a*b;
    printf("\n\nMultiplication of Two Numbers is : %d",ans);
    div=(float)a/(float)b;
    printf("\n\nDivision of Two Numbers is :       %f",div);
    ans=a%b;
    printf("\n\nModulo of Two Numbers is :         %d",ans);
} 