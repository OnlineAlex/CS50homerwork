#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
void sort(int values[], int n);
bool search(int value, int values[], int n);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./find needle\n");
        return -1;
    }
    int needle = atoi(argv[1]);
    int size = 9;
    int haystack[65536] = { 2, 4, 5, 7, 9, 1, 3, 6, 8 };
    sort(haystack, size);
    printf("ok");
    if (search(needle, haystack, size))
    {
        printf("\nFound needle in haystack!\n\n");
        return 0;
    }
    else
    {
        printf("\nDidn't find needle in haystack.\n\n");
        return 1;
    }
}


bool search(int value, int values[], int n)
{
    int min = 0;
    for (int i = 0, in = n/2; i < in; i++)
    {
        if (values[min + (n-min)/2] > value)
        {
            n = min + (n - min)/2;
            printf("%i n", n);
        }
        else if (values[min + (n - min)/2] < value)
        {
            min = min + (n - min)/2;
            printf("%i min", min);
        }
        else
        {
            return true;
        }
    }
    return false;
}

void sort(int values[], int n)
{
    int min = values[0];
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }
        t = values[i];
        values[i] = values[min];
        values[min] = t;
    }
    return;
}
