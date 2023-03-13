#include <stdio.h>
int main()
{
    int hd, cd;
    int ch, ch1;
    printf("\n * Hot Drink \n * Cold Drink");
    printf("\n 'What Do YOu Like to Have'");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\n Hot Drink : ");
        printf("\n - Hot Coffee \n - Hot Soup \n - Hot Tea \n - Hot Water");
        printf("\n What Do You Like to Have :");
        scanf("%d", &ch1);

        switch (ch1)
        {
        case 1:
            printf("\n 'Hot Coffee'");
            break;
        case 2:
            printf("\n 'Hot Soup'");
            break;
        case 3:
            printf("\n 'Hot Tea'");
            break;
        case 4:
            printf("\n 'Hot Water'");
            break;
        default:
            printf("\n 'Sorry Not Availbale'");
            break;
        }
        break;

    case 2:
        printf("\n Cold Drink : ");
        printf("\n - Cold Coffe \n - Cold Tea \n - Coco \n - Fruit Juice");
        printf("\n What Do YOu Like to Have : ");
        scanf("%d", &ch1);

        switch (ch1)
        {
        case 1:
            printf("\n 'Cold Coffee'");
            break;
        case 2:
            printf("\n 'Cold Tea'");
            break;
        case 3:
            printf("\n 'Coco'");
            break;
        case 4:
            printf("\n 'Fruit Juice'");
            break;
        default:
            printf("\n 'Sorry Not Available'");
            break;
        }
        break;
    default:
        printf("\n 'We are Sorry for Inconvenience'");
        break;
    }
}