#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
        {
            s[i] += 13;
        }
        else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
        {
            s[i] -= 13;
        }
        i++;
    }

    return s;
}

