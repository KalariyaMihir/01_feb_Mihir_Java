// wap a to find vowels and consonants characters
#include <stdio.h>
void main()
{
   char ch;
   printf("Enter a Single Character : ");
   scanf("%c", &ch);
   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
   {
      printf("Given Charcter is Vowel");
   }
   else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
   {
      printf("give Charcter is Vowel");
   }
   else 
   {
      printf("Given Charcter is Consonants");
   }
}