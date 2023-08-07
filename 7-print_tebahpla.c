#include <stdio.h>

int main()
{
    int number;
    for (number = 'z'; number >= 'a'; number--)
    {
        putchar(number);
    }
    putchar('\n');
}