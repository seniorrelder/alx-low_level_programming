#include <stdio.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to print.
 */
void _puts(char *str)
{
    while (*str)
    {
        putchar(*str++);
    }
    putchar('\n');
}
