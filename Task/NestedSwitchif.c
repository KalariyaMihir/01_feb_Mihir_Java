//nestedif and switch statement
#include<stdio.h>
int main()
{
    int Hotdrink,Colddrink,Hotwater,Coldwater,HotTea,ColdTea;
    int choice1;
    int ch;
    printf("\n1.Hot drink : \n2.Cold Drink :");
    printf("\nEnter your Choice");
    scanf("%d",&choice1);
    switch (choice1)
    {
    case 1:
      printf("\n Hot Drinks:");
      printf("\n1.Hot Tea : \n2.Hot Coffee :");
      printf("\nEnter your Choice :");
       scanf("%d",&ch);
       switch (ch)
       {
       case 1:
          printf("\n Hot Tea");
           break;
       case 2:
          printf("\n Hot Water");
           break;
       default:
        printf("\n Not Availbale");
          break;
       }

        break;
    
    case 2:
         printf("\n Cold Drinks :");
          printf("\n1.Maza : \n2.Pepsi :");
          printf("\nEnter your Choice :");
         scanf("%d",&ch);         
         switch (ch)
         {
         case 1:
             printf("\nCold Tea");   
             break;
         case 2:
             printf("\nCold Water");
         default:
             printf("\n Not Available");
            break;
         }
    default:
         printf("\n Not Available");
        break;
    }
}