#include<stdio.h>
void main()
{   
    char more;
    int item,quantity,cost,totalbill;
    

    // Pass Message to show menu to user 
    printf("Welcome to Our Restaurant");
    printf("\n\n\t   --Here is Your Menu --");

    // Hotel Menu
    printf("\n\n\t1. Pizza           - 150 rs");
    printf("\n\t2. Burger          - 70 rs");
    printf("\n\t3. Pasta           - 90 rs");
    printf("\n\t4. Fries           - 50 rs");
    printf("\n\t5. cold Drinks     - 25 rs");

    printf("\n\n -- So What Would you like to Have ? --    ");

    // Do while loop for condition check
    do
    {

    // select item from menu
    printf("\n\nSelect Item from Menu :");
    scanf("%d",&item); 
    // Enter quantity as per users choice
    printf("Select Quantity :");
    scanf("%d",&quantity);

    // switch for choice item
    switch (item)
    {
    
    case 1:

        // cost = item cost multiple to quantity
        cost = 150 * quantity;
        printf("%d Pizza ",quantity);
        break;

    case 2:
        cost = 70 * quantity;
        printf("%d Burger ",quantity);    
        break;

    case 3:
        cost = 90 * quantity;
        printf("%d Pasta ",quantity);
        break;

    case 4:
        cost = 50 * quantity;
        printf("%d Fries ",quantity);
        break;

    case 5:
        cost = 25 * quantity;
        printf("%d Cold Drinks ",quantity);     
        break;   

    default:
        printf("--Sorry That Item is not Available --");
        break;
    }

    
    // total bill = addition of all ordered item cost
    totalbill += cost;

    // to order something more
    printf("\n\nDo you Want to Order something More ? ");
    printf("Press Y / N ");
    scanf(" %c",&more);
    
    }
    while (more == 'Y' || more == 'y' );

    // for print total bill
    printf("\nYour Total Bill is : %d",totalbill);
}
