#include <stdio.h>  // Для printf
#include <string.h> // Для strtok
#include <cs50.h>

int main (void)
{
   string key = "becon";
   int intKey[strlen(key)];
   for (int i = 0, ls = strlen(key); i < ls; i++)
   {
      intKey[i] = key[i]-97;
   }
   for (int i = 0; i < 5; i++)
   {
      printf("%i\n", intKey[i]);
   }
}