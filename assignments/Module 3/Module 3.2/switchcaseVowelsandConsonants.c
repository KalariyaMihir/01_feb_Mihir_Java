// WAP to Find Vowels andd Consonants using switch case

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Charater : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Character is Vowel");
        break;

    default:
        printf("Character is Consonants");
        break;
    }
}