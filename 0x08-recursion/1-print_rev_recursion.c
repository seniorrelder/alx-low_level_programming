#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to print in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s) /* If the current character is not the null terminator */
    {
        _print_rev_recursion(s + 1); /* Recursive call with the next character */
        putchar(*s); /* Print the current character after the recursive call */
    }
}
