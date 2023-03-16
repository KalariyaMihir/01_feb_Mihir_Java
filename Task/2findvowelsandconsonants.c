// wap a to find vowels and consonants characters
#include <stdio.h>
void main()
{
   char ch;
   printf("Enter a Single Character : ");
   scanf("%c", &ch);
   if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'|| ch == 'u'|| ch == 'U')
   {
      printf("Given Character is Vowel");
   }
   else if ( ch >=65 && ch <= 122 && !(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'|| ch == 'u'|| ch == 'U')  )
   {
      printf("give Character is Consonants");
   }
   else 
   {
      printf("Given Charcter is Number, Special character, or Symbol");
   }
}