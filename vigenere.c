#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int validation(int argc, string key);
int encrypted(string word, string key);

int main(int argc, string argv[])
{
    if (validation(argc, argv[1]))
    {
        return 0;
    }
    string p = get_string();
    encrypted(p, argv[1]);
    return 1;
}

int validation(int argc, string key)
{
    if (argc != 2)
    {
        printf("I allow only 2 arguments to be written\n");
        return 1;
    }
    for (int i = 0, ls = strlen(key); i < ls; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Only letters\n");
            return 1;
        }
    }
    return 0;
}

int encrypted(string word, string key)
{
    for (int i = 0, j = 0, n = strlen(word), lk = strlen(key); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            if (islower(word[i]))
            {
                int result = (word[i] + (key[j % lk] - 97)) % 97 % 26 + 97;
                printf("%c", result);
            }
            else
            {
                int result = (word[i] + (key[j % lk] - 97)) % 65 % 26 + 65;
                printf("%c", result);
            }
            j++;
        }
        else
        {
            printf("%c", word[i]);
        }
    }
    printf("\n");
    return 1;
}