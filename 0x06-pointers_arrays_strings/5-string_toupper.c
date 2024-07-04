#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @s: The string to convert.
 *
 * Return: Pointer to the modified string @s.
 */
char *string_toupper(char *s)
{
    char *ptr = s;

    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr -= 32; /* Convert lowercase to uppercase using ASCII values */
        }
        ptr++;
    }

    return s;
}


