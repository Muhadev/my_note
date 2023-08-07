#include <stdio.h>

int main()
{
    int number;
    for (number = 0; number <= 9; number++)
    {
        if (number != 0)
        {
            putchar(',');
            putchar(' ');
        }
        putchar('0' + number); 
    }
    putchar('\n');  
}