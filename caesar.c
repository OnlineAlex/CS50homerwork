#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("I allow only 2 arguments to be written\n");
        return 0;
    }
    string p = get_string();
    int k = atoi(argv[1]);
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (isalpha(p[i]))
        {
            if (islower(p[i]))
            {
                int result = (p[i] + k) % 96 % 26 + 96;
                printf("%c", result);
            }
            else
            {
                int result = (p[i] + k) % 64 % 26 + 64;
                printf("%c", result);
            }
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
}