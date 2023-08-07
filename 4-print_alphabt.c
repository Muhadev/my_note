#include <stdio.h>

int main()
{
    int letter;
    for (letter = 'a'; letter <= 'z' ; letter++)
    {
        if (letter != 'e' && letter != 'q')
        putchar(letter);
    }
    putchar('\n');
}