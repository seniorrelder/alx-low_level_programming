#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *temp = dest;

    /* Move to the end of dest */
    while (*dest)
    {
        dest++;
    }

    /* Copy src to the end of dest */
    while (*src)
    {
        *dest++ = *src++;
    }

    /* Add the terminating null byte */
    *dest = '\0';

    /* Return the pointer to the beginning of the concatenated string */
    return temp;
}
