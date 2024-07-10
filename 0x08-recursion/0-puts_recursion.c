#include <stdio.h>

/* 
 * _puts_recursion - Prints a string followed by a new line, recursively.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  /* Base case: if the current character is the null terminator */
    {
        putchar('\n');  /* Print a new line and return */
        return;
    }
    putchar(*s);  /* Print the current character */
    _puts_recursion(s + 1);  /* Recursive call with the next character of the string */
}
