#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to calculate the length of.
 * 
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0') /* Base case: if the current character is the null terminator */
    {
        return 0;
    }
    else
    {
        return 1 + _strlen_recursion(s + 1); /* Recursive step: move to the next character */
    }
}
