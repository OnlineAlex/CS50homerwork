#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int timeShower = get_int();
    printf("Oh, you used %i bottles.\n", timeShower*12);
}