#include<stdio.h>
void main()
{
    int a;
    int ans;
    printf("Enter Your Age :");
    scanf("%d",&a);
    printf("Your Current Age in 2023 is :%d",a);
    ans=a++;
    printf("\nYour age in 2024 is:%d",a);
    ans=a--;
    ans=a--;
    printf("\nYour age in 2022 is:%d",a);
    
}