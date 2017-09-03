#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height = 0;
    while (height < 1)
    {
        height = get_int();
        }
    for (int hashs = 2; hashs <= height+1; hashs++)
    {
       for (int i = 0; i < hashs; i++)
       {
       printf("#");
       }
       printf("\n");
    }

}