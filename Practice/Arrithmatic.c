// Arrithmatic operators
#include<stdio.h>
void main()
{
    int a,b;
    int ans;
    char c='A',d='B';
    float div;
    printf("Enter Two Value:");
    scanf("%d%d",&a,&b);
    ans=a+b;
    //printf("2 Number Addition : %d",ans);
    printf("Addition of 2 Numbers  : %d",c+d);
    ans=a-b;
    printf("\nSubstration of 2 Numbers :%d",ans);
    ans=a*b;
    printf("\nMultiplication of 2 Numbers :%d",ans);
    div=(float)a/(float)b;
    //ans=a/b;
    printf("\nDivision of 2 Numbers :%f",div);
    ans=a%b;
    printf("\nModulo of 2 Numbers :%d",ans);
    ans=a++;
    printf("\n\bIncrement of a :%d",a);
    ans=b--;
    printf("\n\bIncrment of b :%d",b);
} 