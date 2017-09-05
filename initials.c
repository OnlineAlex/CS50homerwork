#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();
    printf("%c", toupper(name[0]));
    for (int i = 0, ls = strlen(name); i <= ls; i++)
    {
        if (name[i]==' ')
        {
            printf("%c", toupper(name[i+1]));
        }
    }
    printf("\n");
}

