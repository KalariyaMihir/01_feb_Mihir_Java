#include<stdio.h>
int main()
{
    FILE *fptr;
    char filedata[20];
    char nm[20];
    printf("Enter Your Name :");
    scanf("%s",&nm);
    fptr = fopen("D:/full stack/hello.txt", "a");
    fprintf(fptr,"%s",nm);
    fclose(fptr);
    fptr = fopen("D:/full stack/hello.txt","r");
    fscanf(fptr,"%s",&filedata);
    printf("%s", filedata);
    fclose(fptr);
     
    return 0;
}