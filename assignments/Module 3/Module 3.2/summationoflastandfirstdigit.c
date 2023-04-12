// WAP to do Summation of First And Last digit given by user

#include<stdio.h>
int main()
{
    int number,ans,fn,ln;
    // To pass The message to Enter Values 
    printf("Enter Numbers  :");
    // To Store the Value 
    scanf("%d",&number);
    
    //for Find Last Digit from given numbers
    ln = number % 10;
    
    //Find the first digit by dividing n by 10 until n greater then 10
    while ( number >= 10)
    {
        number = number/ 10;
    }
    fn = number;
    
    // To do sum of First & Last digit 
    ans = fn + ln;
    
    // To pass the sum of First & Last digit to user
    printf("Sum of First & Last digit is : %d",ans);



}