/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int min = 0;
    for (int i = 0, in = n/2; i < in; i++)
    {
        if (values[min + (n-min)/2] > value)
        {
            n = min + (n - min)/2;
        }
        else if (values[min + (n - min)/2] < value)
        {
            min = min + (n - min)/2;
        }
        else
        {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
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
