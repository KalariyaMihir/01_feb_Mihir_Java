// String Length using strlen

#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int length;
    printf("Enter Your Name :");
    scanf("%s", &name);
    length = strlen(name);
    printf("Length of %s is %d", name, length);
}