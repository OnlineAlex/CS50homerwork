#include <stdio.h>
#include <cs50.h>


int main(void)
{
    float cent = 0;
    int i = 0;
    while (cent < 1)
    {
        printf("O hai! How much change is owed?\n");
        cent = get_float()*100;
        }
    int int_cent = (int) cent;
    while (int_cent > 0)
    {
        if (int_cent > 24)
        {
            i += int_cent / 25;
            int_cent = int_cent % 25;
        }
        else if (int_cent > 9)
        {
            i += int_cent / 10;
            int_cent = int_cent % 10;
        }
        else if (int_cent > 4)
        {
            i += int_cent / 5;
            int_cent = int_cent % 5;
        }
        else
        {
            i += int_cent;
            int_cent = 0;
        }
    }
    printf("%i\n", i);
}