#include <stdio.h>  // Для printf
#include <string.h> // Для strtok
#include <cs50.h>

int main (void)
{
   string str = get_string();
   char new1 = str[0];
   printf ("%c", new1);
   new1 = str[3];
   printf ("%c\n", new1);
}