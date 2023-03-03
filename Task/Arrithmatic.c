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
    printf("Addition of Two Numbers  : %d",c+d);
    ans=a-b;
    printf("\nSubstration of Two Numbers :%d",ans);
    ans=a*b;
    printf("\nMultiplication of Two Numbers :%d",ans);
    div=(float)a/(float)b;
    //ans=a/b;
    printf("\nDivision of Two Numbers :%f",div);
    ans=a%b;
    printf("\nModulo of Two Numbers :%d",ans);
    ans=a++;
    printf("\n\bIncrement of a :%d",a);
    ans=b--;
    printf("\n\bDecrement of b :%d",b);
}
