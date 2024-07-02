#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
    int length = 0, i;

    /* Find the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    /* Print characters in reverse order */
    for (i = length - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }

    /* Print a new line after the string */
    putchar('\n');
}
